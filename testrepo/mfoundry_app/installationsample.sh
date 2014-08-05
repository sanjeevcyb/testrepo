#!/bin/bash
# ***************************************************************************************************************************************
# This script is used for installing a publisher instance of Media Foundry                                                              *
# Created by Cybage                                                                                                                     *
# This script will install a drupal instance from a stable drupal version, the flow of events is as listed below                        *
# Step1. Copy / Export stable mediafoundry publisher code from either svn or copy from a stable location                                *
# Step2. Navigate to the default folder path and a).ccpy default.settings.php to settings.php, b)make files folder and give permissions *
#        to the default folder                                                                                                          *
# Step3. Create database with the datbase details provided                                                                              *
# Step4. All necessary steps are in place, so proceed with drush installation for installing drupal                                     *
# Step5. Create vhost.conf for the domain name passed to the script 		                                                        *
#                                                                                     							*
# TO execute this script. 														*
# Change the DOCROOT to the document root provided for the site for Ex: /u01/www 							*
# ***************************************************************************************************************************************

# Root Directory path
DOCROOT=/var/www/html

LOG=/var/log/InstanceCreation.log
# log()
# {
# 	$(DATE)+"instane
# }

DB_USER_NAME=$1 # required db user name
DB_USER_PASS=$2 # required db pass
# DB_NAME=$3 # require db name
DB_ROOT_USER='root'
DB_HOST='localhost'
DB_ROOT_PASSWORD='cybage@123'
DOMAIN_NAME=$3 # domain name argument 'riaus.mediafoundry.com.au'

# Site Details
# ###############################################################
siteName="$DOMAIN_NAME" # SIte namte later change to be an argument $4
siteSlogan="This is a publisher site" # later change this to be taken from argument $5
siteLocale=""
siteAdminEmail="sanjeevc@cybage.com" # later change it to argument $6
siteAdminName=admin # Name of site admin, later change it to be taken from argument $7
siteAdminPass=admin # Password of site admin, later change it to be taken from argument $8
# ###############################################################


# Take code base dump
# svn export http://172.27.195.15/repos/campaignBox/tags/CBP_PROD_RELEASE_2.0.1.1/ "$domain"
cd "$DOCROOT"
# mkdir "$DOMAIN_NAME"
cp -R drupal-7.28 "$DOMAIN_NAME"

# Copy default settings and create a new settings file
cd "$DOCROOT"/"$DOMAIN_NAME"/sites/default
cp default.settings.php settings.php

# Create files folder
mkdir files

# grant writable permission to this path for installation
chmod -R 777 "$DOCROOT"/"$DOMAIN_NAME"/sites/default

# Create database with particular user
Q1="CREATE DATABASE IF NOT EXISTS $DB_USER_NAME;"
Q2="GRANT ALL ON $DB_USER_NAME.* TO '$DB_USER_NAME'@'$DB_HOST' IDENTIFIED BY '$DB_USER_PASS';"
Q3="FLUSH PRIVILEGES;"
SQL="${Q1}${Q2}${Q3}"

mysql -u"$DB_ROOT_USER" -p"$DB_ROOT_PASSWORD" -e "$SQL"

# Install the site
cd "$DOCROOT"/"$DOMAIN_NAME"
drush site-install -y --account-mail="$siteAdminEmail" --account-name="$siteAdminName" --account-pass="$siteAdminPass" --site-name="$siteName" --site-mail="$siteAdminEmail" --locale="$siteLocale" --db-url="mysql://$DB_USER_NAME:$DB_USER_PASS@$DB_HOST/$DB_USER_NAME"

# Create Vhosts for the publisher instance
cat <<EOF > /etc/httpd/conf.d/"$DOMAIN_NAME".conf
<VirtualHost *:80>
	ServerAdmin admin@mediafoundry.com
	DocumentRoot $DOCROOT/$DOMAIN_NAME
	ServerName $DOMAIN_NAME
	ErrorLog logs/$DOMAIN_NAME-error_log
	CustomLog logs/$DOMAIN_NAME-access_log common
	SetEnv APPLICATION_DEV development
</VirtualHost>
EOF
# Restart Aapache
/etc/init.d/httpd graceful
