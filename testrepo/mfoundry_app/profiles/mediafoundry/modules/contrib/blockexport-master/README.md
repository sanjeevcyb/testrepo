blockexport
===========

Drupal 7 module allowing users to import and export custom blocks.  


Export
------
![Export Interface](https://raw.github.com/erikhedin/blockexport/master/export-blocks.jpg)
The export interface allows the user to select a single or multiple blocks to export.  The export code is a custom array that the import page can parse.

Import
------
![Import Interface](https://raw.github.com/erikhedin/blockexport/master/import-blocks.jpg)
The import page accepts the export page's custom array of block content.  During the import the module will check if a block already exists by mapping the block delta and info field.  IF the block already exists it will then update the block's body field to the new value.  If the block does not exist the module will save a new block for you.

Menu Item
---------
You will find a new menu item under Managment >> Structure >> Export Blocks or at the location: /admin/structure/export-block

Notes
-----
We use this module to update and add new blocks when moving from staging to production.  Our sites use the awesome [Context Module](http://drupal.org/project/context) so this module has no ability to set the visibility of the block or what region the block is diplayed in.