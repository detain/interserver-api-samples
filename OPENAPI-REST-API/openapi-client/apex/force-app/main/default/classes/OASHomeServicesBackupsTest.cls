@isTest
private class OASHomeServicesBackupsTest {
    @isTest
    private static void equalsSameInstance() {
        OASHomeServicesBackups homeServicesBackups1 = OASHomeServicesBackups.getExample();
        OASHomeServicesBackups homeServicesBackups2 = homeServicesBackups1;
        OASHomeServicesBackups homeServicesBackups3 = new OASHomeServicesBackups();
        OASHomeServicesBackups homeServicesBackups4 = homeServicesBackups3;

        System.assert(homeServicesBackups1.equals(homeServicesBackups2));
        System.assert(homeServicesBackups2.equals(homeServicesBackups1));
        System.assert(homeServicesBackups1.equals(homeServicesBackups1));
        System.assert(homeServicesBackups3.equals(homeServicesBackups4));
        System.assert(homeServicesBackups4.equals(homeServicesBackups3));
        System.assert(homeServicesBackups3.equals(homeServicesBackups3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASHomeServicesBackups homeServicesBackups1 = OASHomeServicesBackups.getExample();
        OASHomeServicesBackups homeServicesBackups2 = OASHomeServicesBackups.getExample();
        OASHomeServicesBackups homeServicesBackups3 = new OASHomeServicesBackups();
        OASHomeServicesBackups homeServicesBackups4 = new OASHomeServicesBackups();

        System.assert(homeServicesBackups1.equals(homeServicesBackups2));
        System.assert(homeServicesBackups2.equals(homeServicesBackups1));
        System.assert(homeServicesBackups3.equals(homeServicesBackups4));
        System.assert(homeServicesBackups4.equals(homeServicesBackups3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASHomeServicesBackups homeServicesBackups1 = OASHomeServicesBackups.getExample();
        OASHomeServicesBackups homeServicesBackups2 = new OASHomeServicesBackups();

        System.assertEquals(false, homeServicesBackups1.equals('foo'));
        System.assertEquals(false, homeServicesBackups2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASHomeServicesBackups homeServicesBackups1 = OASHomeServicesBackups.getExample();
        OASHomeServicesBackups homeServicesBackups2 = new OASHomeServicesBackups();
        OASHomeServicesBackups homeServicesBackups3;

        System.assertEquals(false, homeServicesBackups1.equals(homeServicesBackups3));
        System.assertEquals(false, homeServicesBackups2.equals(homeServicesBackups3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASHomeServicesBackups homeServicesBackups1 = OASHomeServicesBackups.getExample();
        OASHomeServicesBackups homeServicesBackups2 = new OASHomeServicesBackups();

        System.assertEquals(homeServicesBackups1.hashCode(), homeServicesBackups1.hashCode());
        System.assertEquals(homeServicesBackups2.hashCode(), homeServicesBackups2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASHomeServicesBackups homeServicesBackups1 = OASHomeServicesBackups.getExample();
        OASHomeServicesBackups homeServicesBackups2 = OASHomeServicesBackups.getExample();
        OASHomeServicesBackups homeServicesBackups3 = new OASHomeServicesBackups();
        OASHomeServicesBackups homeServicesBackups4 = new OASHomeServicesBackups();

        System.assert(homeServicesBackups1.equals(homeServicesBackups2));
        System.assert(homeServicesBackups3.equals(homeServicesBackups4));
        System.assertEquals(homeServicesBackups1.hashCode(), homeServicesBackups2.hashCode());
        System.assertEquals(homeServicesBackups3.hashCode(), homeServicesBackups4.hashCode());
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASHomeServicesBackups homeServicesBackups = new OASHomeServicesBackups();
        System.assertEquals(new List<String>(), homeServicesBackups.links);
        System.assertEquals(null, homeServicesBackups.count);
    }
}
