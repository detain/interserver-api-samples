@isTest
private class OASHomeDetailsModulesBackupsTest {
    @isTest
    private static void equalsSameInstance() {
        OASHomeDetailsModulesBackups homeDetailsModulesBackups1 = OASHomeDetailsModulesBackups.getExample();
        OASHomeDetailsModulesBackups homeDetailsModulesBackups2 = homeDetailsModulesBackups1;
        OASHomeDetailsModulesBackups homeDetailsModulesBackups3 = new OASHomeDetailsModulesBackups();
        OASHomeDetailsModulesBackups homeDetailsModulesBackups4 = homeDetailsModulesBackups3;

        System.assert(homeDetailsModulesBackups1.equals(homeDetailsModulesBackups2));
        System.assert(homeDetailsModulesBackups2.equals(homeDetailsModulesBackups1));
        System.assert(homeDetailsModulesBackups1.equals(homeDetailsModulesBackups1));
        System.assert(homeDetailsModulesBackups3.equals(homeDetailsModulesBackups4));
        System.assert(homeDetailsModulesBackups4.equals(homeDetailsModulesBackups3));
        System.assert(homeDetailsModulesBackups3.equals(homeDetailsModulesBackups3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASHomeDetailsModulesBackups homeDetailsModulesBackups1 = OASHomeDetailsModulesBackups.getExample();
        OASHomeDetailsModulesBackups homeDetailsModulesBackups2 = OASHomeDetailsModulesBackups.getExample();
        OASHomeDetailsModulesBackups homeDetailsModulesBackups3 = new OASHomeDetailsModulesBackups();
        OASHomeDetailsModulesBackups homeDetailsModulesBackups4 = new OASHomeDetailsModulesBackups();

        System.assert(homeDetailsModulesBackups1.equals(homeDetailsModulesBackups2));
        System.assert(homeDetailsModulesBackups2.equals(homeDetailsModulesBackups1));
        System.assert(homeDetailsModulesBackups3.equals(homeDetailsModulesBackups4));
        System.assert(homeDetailsModulesBackups4.equals(homeDetailsModulesBackups3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASHomeDetailsModulesBackups homeDetailsModulesBackups1 = OASHomeDetailsModulesBackups.getExample();
        OASHomeDetailsModulesBackups homeDetailsModulesBackups2 = new OASHomeDetailsModulesBackups();

        System.assertEquals(false, homeDetailsModulesBackups1.equals('foo'));
        System.assertEquals(false, homeDetailsModulesBackups2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASHomeDetailsModulesBackups homeDetailsModulesBackups1 = OASHomeDetailsModulesBackups.getExample();
        OASHomeDetailsModulesBackups homeDetailsModulesBackups2 = new OASHomeDetailsModulesBackups();
        OASHomeDetailsModulesBackups homeDetailsModulesBackups3;

        System.assertEquals(false, homeDetailsModulesBackups1.equals(homeDetailsModulesBackups3));
        System.assertEquals(false, homeDetailsModulesBackups2.equals(homeDetailsModulesBackups3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASHomeDetailsModulesBackups homeDetailsModulesBackups1 = OASHomeDetailsModulesBackups.getExample();
        OASHomeDetailsModulesBackups homeDetailsModulesBackups2 = new OASHomeDetailsModulesBackups();

        System.assertEquals(homeDetailsModulesBackups1.hashCode(), homeDetailsModulesBackups1.hashCode());
        System.assertEquals(homeDetailsModulesBackups2.hashCode(), homeDetailsModulesBackups2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASHomeDetailsModulesBackups homeDetailsModulesBackups1 = OASHomeDetailsModulesBackups.getExample();
        OASHomeDetailsModulesBackups homeDetailsModulesBackups2 = OASHomeDetailsModulesBackups.getExample();
        OASHomeDetailsModulesBackups homeDetailsModulesBackups3 = new OASHomeDetailsModulesBackups();
        OASHomeDetailsModulesBackups homeDetailsModulesBackups4 = new OASHomeDetailsModulesBackups();

        System.assert(homeDetailsModulesBackups1.equals(homeDetailsModulesBackups2));
        System.assert(homeDetailsModulesBackups3.equals(homeDetailsModulesBackups4));
        System.assertEquals(homeDetailsModulesBackups1.hashCode(), homeDetailsModulesBackups2.hashCode());
        System.assertEquals(homeDetailsModulesBackups3.hashCode(), homeDetailsModulesBackups4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASHomeDetailsModulesBackups homeDetailsModulesBackups = new OASHomeDetailsModulesBackups();
        Map<String, String> x-property-mappings = homeDetailsModulesBackups.getx-property-mappings();
        System.assertEquals('viewLink', x-property-mappings.get('view_link'));
        System.assertEquals('buyLink', x-property-mappings.get('buy_link'));
        System.assertEquals('listLink', x-property-mappings.get('list_link'));
    }
}
