package Pharmacy;

import AbsFactory.Creator;

public class Pharm_Creator implements Creator {
    @Override
    public String produceItem() {
        return "Pills";
    }
}
