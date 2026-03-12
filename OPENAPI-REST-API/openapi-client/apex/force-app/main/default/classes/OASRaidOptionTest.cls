@isTest
private class OASRaidOptionTest {
    @isTest
    private static void equalsSameInstance() {
        OASRaidOption raidOption1 = OASRaidOption.getExample();
        OASRaidOption raidOption2 = raidOption1;
        OASRaidOption raidOption3 = new OASRaidOption();
        OASRaidOption raidOption4 = raidOption3;

        System.assert(raidOption1.equals(raidOption2));
        System.assert(raidOption2.equals(raidOption1));
        System.assert(raidOption1.equals(raidOption1));
        System.assert(raidOption3.equals(raidOption4));
        System.assert(raidOption4.equals(raidOption3));
        System.assert(raidOption3.equals(raidOption3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASRaidOption raidOption1 = OASRaidOption.getExample();
        OASRaidOption raidOption2 = OASRaidOption.getExample();
        OASRaidOption raidOption3 = new OASRaidOption();
        OASRaidOption raidOption4 = new OASRaidOption();

        System.assert(raidOption1.equals(raidOption2));
        System.assert(raidOption2.equals(raidOption1));
        System.assert(raidOption3.equals(raidOption4));
        System.assert(raidOption4.equals(raidOption3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASRaidOption raidOption1 = OASRaidOption.getExample();
        OASRaidOption raidOption2 = new OASRaidOption();

        System.assertEquals(false, raidOption1.equals('foo'));
        System.assertEquals(false, raidOption2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASRaidOption raidOption1 = OASRaidOption.getExample();
        OASRaidOption raidOption2 = new OASRaidOption();
        OASRaidOption raidOption3;

        System.assertEquals(false, raidOption1.equals(raidOption3));
        System.assertEquals(false, raidOption2.equals(raidOption3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASRaidOption raidOption1 = OASRaidOption.getExample();
        OASRaidOption raidOption2 = new OASRaidOption();

        System.assertEquals(raidOption1.hashCode(), raidOption1.hashCode());
        System.assertEquals(raidOption2.hashCode(), raidOption2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASRaidOption raidOption1 = OASRaidOption.getExample();
        OASRaidOption raidOption2 = OASRaidOption.getExample();
        OASRaidOption raidOption3 = new OASRaidOption();
        OASRaidOption raidOption4 = new OASRaidOption();

        System.assert(raidOption1.equals(raidOption2));
        System.assert(raidOption3.equals(raidOption4));
        System.assertEquals(raidOption1.hashCode(), raidOption2.hashCode());
        System.assertEquals(raidOption3.hashCode(), raidOption4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASRaidOption raidOption = new OASRaidOption();
        Map<String, String> x-property-mappings = raidOption.getx-property-mappings();
        System.assertEquals('shortDesc', x-property-mappings.get('short_desc'));
        System.assertEquals('monthlyPrice', x-property-mappings.get('monthly_price'));
    }
}
