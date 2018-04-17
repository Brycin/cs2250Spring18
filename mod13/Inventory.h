/*
 * =====================================================================================
 *
 *       Filename:  Inventory.h
 *
 *    Description:  Inventory class
 *
 *        Version:  1.0
 *        Created:  04/17/2018 09:26:22 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  INVENTORY__INC__
#define  INVENTORY_INC__
class InventoryItem 
{
    private:
        string itemName;  // Name of item
        int itemQuantity; // Number of items available

    public:
        // Constructor
        // Only in the prototype you have default values NOT in the actual definitions
        InventoryItem(string initName = "", int initQty = 0);
        void PrintItem();
};

#endif /* ----- #ifndef INVENTORY__INC__ ----- */

