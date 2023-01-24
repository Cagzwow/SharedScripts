/*
<--------------------------------------------------------------------------->
 - Developer(s): Ayiko 
 - Complete: 100%
 - ScriptName: 'npc_gearing' 
 - Comment: Should make gearing easier for beginners etc. Cata 4.3.4 Starting Ruthless
 - Updated: 7/26/2014
<--------------------------------------------------------------------------->
*/

#include "ScriptPCH.h"
 
enum defines
{
 pala_dps_hands = 70250, // Just an definer so i can tidy it up if i feel like it lol will use IDs for now.
};
 
class npc_gearing : public CreatureScript
{
public:
	npc_gearing() : CreatureScript("npc_gearing"){}

	bool OnGossipHello(Player * pPlayer, Creature * pCreature)
    {                                            
		pPlayer->ADD_GOSSIP_ITEM(4, "Paladin DPS Set", GOSSIP_SENDER_MAIN, 0);
        pPlayer->ADD_GOSSIP_ITEM(4, "Paladin Heal Set", GOSSIP_SENDER_MAIN, 1);
		pPlayer->ADD_GOSSIP_ITEM(4, "Warrior DPS Set", GOSSIP_SENDER_MAIN, 2);
		pPlayer->ADD_GOSSIP_ITEM(4, "Shaman DPS RANGED Set", GOSSIP_SENDER_MAIN, 3);
		pPlayer->ADD_GOSSIP_ITEM(4, "Shaman DPS MELEE Set", GOSSIP_SENDER_MAIN, 4);
		pPlayer->ADD_GOSSIP_ITEM(4, "Shaman HEAL  Set", GOSSIP_SENDER_MAIN, 5);
		pPlayer->ADD_GOSSIP_ITEM(4, "Hunter DPS Set", GOSSIP_SENDER_MAIN, 6);
		pPlayer->ADD_GOSSIP_ITEM(4, "Priest Heal Set", GOSSIP_SENDER_MAIN, 7);
		pPlayer->ADD_GOSSIP_ITEM(4, "Priest DPS Set", GOSSIP_SENDER_MAIN, 8);
		pPlayer->ADD_GOSSIP_ITEM(4, "Warlock DPS Set", GOSSIP_SENDER_MAIN, 9);
		pPlayer->ADD_GOSSIP_ITEM(4, "Mage DPS Set", GOSSIP_SENDER_MAIN, 10);
		pPlayer->ADD_GOSSIP_ITEM(4, "Rogue DPS Set", GOSSIP_SENDER_MAIN, 11);
		pPlayer->ADD_GOSSIP_ITEM(4, "Druid HEAL Set", GOSSIP_SENDER_MAIN, 12);
		pPlayer->ADD_GOSSIP_ITEM(4, "Druid DPS MELEE Set", GOSSIP_SENDER_MAIN, 13);
		pPlayer->ADD_GOSSIP_ITEM(4, "Druid DPS RANGED Set", GOSSIP_SENDER_MAIN, 14);
		pPlayer->ADD_GOSSIP_ITEM(4, "Death Knight DPS Set", GOSSIP_SENDER_MAIN, 15);
		pPlayer->PlayerTalkClass->SendGossipMenu(9425, pCreature->GetGUID());
		return true;
    }
 
    bool OnGossipSelect(Player * Player, Creature * Creature, uint32 /*uiSender*/, uint32 uiAction)
    {
		if(!Player)
			return true;
 
		switch(uiAction)
		{
		case 0:
			{
				Player->AddItem(70250, 1); // Hands -- Paladin dps gear
				Player->AddItem(70252, 1); // Legs
				Player->AddItem(70251, 1); // Helm
				Player->AddItem(70253, 1); // Shoulders
				Player->AddItem(70249, 1); // Chest
				Player->GetSession()->SendNotification("You have recieved your gear!");
				Player->PlayerTalkClass->SendCloseGossip();
			}
			break;
		case 1:
			{
				Player->AddItem(70354, 1); // Hands -- paladin heal gear
				Player->AddItem(70355, 1); // Helm
				Player->AddItem(70356, 1); // Legs
				Player->AddItem(70357, 1); // Shoulders
				Player->AddItem(70353, 1); // Chest
				Player->GetSession()->SendNotification("You have recieved your gear!");
				Player->PlayerTalkClass->SendCloseGossip();
			}
			break;
		case 2:
			{
				Player->AddItem(70258, 1); // Shoulders  -- warrior arms gear
				Player->AddItem(70255, 1); // Hands
				Player->AddItem(70254, 1); // Chest
				Player->AddItem(70254, 1); // Helm
				Player->AddItem(70257, 1); // Legs
				Player->GetSession()->SendNotification("You have recieved your gear!");
				Player->PlayerTalkClass->SendCloseGossip();
			}
			break;
		case 3:
			{
				Player->AddItem(70274, 1); // Chest -- Shaman elemental gear
				Player->AddItem(70275, 1); // Hands
				Player->AddItem(70276, 1); // Helm
				Player->AddItem(70278, 1); // Shoulers
				Player->AddItem(70277, 1); // Legs
				Player->GetSession()->SendNotification("You have recieved your gear!");
				Player->PlayerTalkClass->SendCloseGossip();
			}
			break;
		case 4:
			{
				Player->AddItem(70273, 1); // Shoulders  -- sham agility set
				Player->AddItem(70270, 1); // Hands
				Player->AddItem(70269, 1); // Chest
				Player->AddItem(70271, 1); // Helm
				Player->AddItem(70272, 1); // Legs
				Player->GetSession()->SendNotification("You have recieved your gear!");
				Player->PlayerTalkClass->SendCloseGossip();
			}
			break;
		case 5:
			{
				Player->AddItem(70268, 1); // Shoulders   -- sham heal set
				Player->AddItem(70265, 1); // Hands
				Player->AddItem(70264, 1); // Chest
				Player->AddItem(70266, 1); // Helm
				Player->AddItem(70267, 1); // Legs
				Player->GetSession()->SendNotification("You have recieved your gear!");
				Player->PlayerTalkClass->SendCloseGossip();
			}
			break;
		case 6:
			{
				Player->AddItem(70263, 1); // Shoulders  -- hunter set
				Player->AddItem(70260, 1); // Hands
				Player->AddItem(70259, 1); // Chest
				Player->AddItem(70261, 1); // Helm
				Player->AddItem(70262, 1); // Legs
				Player->GetSession()->SendNotification("You have recieved your gear!");
				Player->PlayerTalkClass->SendCloseGossip();
			}
			break;
		case 7:
			{
				Player->AddItem(70308, 1); // Shoulders   -- priest heal set
				Player->AddItem(70304, 1); // Hands
				Player->AddItem(70307, 1); // Chest
				Player->AddItem(70305, 1); // Helm
				Player->AddItem(70306, 1); // Legs
				Player->GetSession()->SendNotification("You have recieved your gear!");
				Player->PlayerTalkClass->SendCloseGossip();
			}
			break;
		case 8:
			{
				Player->AddItem(70313, 1); // Shoulders   -- priest dps set
				Player->AddItem(70309, 1); // Hands
				Player->AddItem(70312, 1); // Chest
				Player->AddItem(70310, 1); // Helm
				Player->AddItem(70311, 1); // Legs
				Player->GetSession()->SendNotification("You have recieved your gear!");
				Player->PlayerTalkClass->SendCloseGossip();
			}
			break;
		case 9:
			{
				Player->AddItem(70318, 1); // Shoulders   -- warlock dps set
				Player->AddItem(70314, 1); // Hands
				Player->AddItem(70317, 1); // Chest
				Player->AddItem(70315, 1); // Helm
				Player->AddItem(70316, 1); // Legs
				Player->GetSession()->SendNotification("You have recieved your gear!");
				Player->PlayerTalkClass->SendCloseGossip();
			}
			break;
		case 10:
			{
				Player->AddItem(70303, 1); // Shoulders   -- mage dps set
				Player->AddItem(70299, 1); // Hands
				Player->AddItem(70302, 1); // Chest
				Player->AddItem(70300, 1); // Helm
				Player->AddItem(70301, 1); // Legs
				Player->GetSession()->SendNotification("You have recieved your gear!");
				Player->PlayerTalkClass->SendCloseGossip();
			}
			break;
		case 11:
			{
				Player->AddItem(70298, 1); // Shoulders   -- rogue dps set
				Player->AddItem(70295, 1); // Hands
				Player->AddItem(70294, 1); // Chest
				Player->AddItem(70296, 1); // Helm
				Player->AddItem(70297, 1); // Legs
				Player->GetSession()->SendNotification("You have recieved your gear!");
				Player->PlayerTalkClass->SendCloseGossip();
			}
			break;
		case 12:
			{
				Player->AddItem(70288, 1); // Shoulders   -- druid heal  set
				Player->AddItem(70284, 1); // Hands
				Player->AddItem(70287, 1); // Chest
				Player->AddItem(70285, 1); // Helm
				Player->AddItem(70286, 1); // Legs
				Player->GetSession()->SendNotification("You have recieved your gear!");
				Player->PlayerTalkClass->SendCloseGossip();
			}
			break;
		case 13:
			{
				Player->AddItem(70283, 1); // Shoulders   -- druid dps melee  set
				Player->AddItem(70279, 1); // Hands
				Player->AddItem(70282, 1); // Chest
				Player->AddItem(70280, 1); // Helm
				Player->AddItem(70281, 1); // Legs
				Player->GetSession()->SendNotification("You have recieved your gear!");
				Player->PlayerTalkClass->SendCloseGossip();
			}
			break;
		case 14:
			{
				Player->AddItem(70293, 1); // Shoulders   -- druid dps ranged  set
				Player->AddItem(70289, 1); // Hands
				Player->AddItem(70292, 1); // Chest
				Player->AddItem(70290, 1); // Helm
				Player->AddItem(70291, 1); // Legs
				Player->GetSession()->SendNotification("You have recieved your gear!");
				Player->PlayerTalkClass->SendCloseGossip();
			}
			break;
		case 15:
			{
				Player->AddItem(70248, 1); // Shoulders   -- death knight set
				Player->AddItem(70245, 1); // Hands
				Player->AddItem(70244, 1); // Chest
				Player->AddItem(70246, 1); // Helm
				Player->AddItem(70247, 1); // Legs
				Player->GetSession()->SendNotification("You have recieved your gear!");
				Player->PlayerTalkClass->SendCloseGossip();
			}
			break;
		}
		return true;

	}
 
};
 
void AddSC_npc_gearing()
{
	new npc_gearing();
}
