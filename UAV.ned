package org.car2x.veins.nodes;
import org.car2x.veins.modules.mobility.*;
import org.car2x.veins.base.modules.*;
import org.car2x.veins.modules.nic.Nic80211p;
import org.car2x.veins.modules.application.FifithGeneration.NicFifth;


module UAV 
{
    parameters:
        string applType; 
        string nicType = default("Nic80211p");
  
       
        //energy 
        int batteryCapacity @unit("mAh") ; 
        int batteryRemaining @unit("mAh");
        
      
        
    gates:
        input veinsradioIn; 
        
    submodules:
        appl: <applType> like org.car2x.veins.base.modules.IBaseApplLayer {
            parameters:
                @display("p=60,50");
        }

        nic: <nicType> like org.car2x.veins.modules.nic.INic80211p {
            parameters:
                @display("p=60,166");
        }


			 mobility: BaseMobility {
            parameters:
                @display("p=130,172;i=block/cogwheel");
        }
        
        
     ort: LinearMobility{
         parameters:
                @display("p=130,172;i=block/cogwheel");
     }
   
           
    connections allowunconnected:
       
        nic.upperLayerOut --> appl.lowerLayerIn;
        nic.upperLayerIn <-- appl.lowerLayerOut;
        nic.upperControlOut --> appl.lowerControlIn;
        nic.upperControlIn <-- appl.lowerControlOut;
   
           veinsradioIn --> nic.radioIn;
}
