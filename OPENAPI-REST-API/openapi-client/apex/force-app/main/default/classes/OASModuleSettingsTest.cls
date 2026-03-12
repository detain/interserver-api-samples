@isTest
private class OASModuleSettingsTest {
    @isTest
    private static void equalsSameInstance() {
        OASModuleSettings moduleSettings1 = OASModuleSettings.getExample();
        OASModuleSettings moduleSettings2 = moduleSettings1;
        OASModuleSettings moduleSettings3 = new OASModuleSettings();
        OASModuleSettings moduleSettings4 = moduleSettings3;

        System.assert(moduleSettings1.equals(moduleSettings2));
        System.assert(moduleSettings2.equals(moduleSettings1));
        System.assert(moduleSettings1.equals(moduleSettings1));
        System.assert(moduleSettings3.equals(moduleSettings4));
        System.assert(moduleSettings4.equals(moduleSettings3));
        System.assert(moduleSettings3.equals(moduleSettings3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASModuleSettings moduleSettings1 = OASModuleSettings.getExample();
        OASModuleSettings moduleSettings2 = OASModuleSettings.getExample();
        OASModuleSettings moduleSettings3 = new OASModuleSettings();
        OASModuleSettings moduleSettings4 = new OASModuleSettings();

        System.assert(moduleSettings1.equals(moduleSettings2));
        System.assert(moduleSettings2.equals(moduleSettings1));
        System.assert(moduleSettings3.equals(moduleSettings4));
        System.assert(moduleSettings4.equals(moduleSettings3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASModuleSettings moduleSettings1 = OASModuleSettings.getExample();
        OASModuleSettings moduleSettings2 = new OASModuleSettings();

        System.assertEquals(false, moduleSettings1.equals('foo'));
        System.assertEquals(false, moduleSettings2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASModuleSettings moduleSettings1 = OASModuleSettings.getExample();
        OASModuleSettings moduleSettings2 = new OASModuleSettings();
        OASModuleSettings moduleSettings3;

        System.assertEquals(false, moduleSettings1.equals(moduleSettings3));
        System.assertEquals(false, moduleSettings2.equals(moduleSettings3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASModuleSettings moduleSettings1 = OASModuleSettings.getExample();
        OASModuleSettings moduleSettings2 = new OASModuleSettings();

        System.assertEquals(moduleSettings1.hashCode(), moduleSettings1.hashCode());
        System.assertEquals(moduleSettings2.hashCode(), moduleSettings2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASModuleSettings moduleSettings1 = OASModuleSettings.getExample();
        OASModuleSettings moduleSettings2 = OASModuleSettings.getExample();
        OASModuleSettings moduleSettings3 = new OASModuleSettings();
        OASModuleSettings moduleSettings4 = new OASModuleSettings();

        System.assert(moduleSettings1.equals(moduleSettings2));
        System.assert(moduleSettings3.equals(moduleSettings4));
        System.assertEquals(moduleSettings1.hashCode(), moduleSettings2.hashCode());
        System.assertEquals(moduleSettings3.hashCode(), moduleSettings4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASModuleSettings moduleSettings = new OASModuleSettings();
        Map<String, String> x-property-mappings = moduleSettings.getx-property-mappings();
        System.assertEquals('tiTLEFIELD2', x-property-mappings.get('TITLE_FIELD2'));
        System.assertEquals('tiTLEFIELD3', x-property-mappings.get('TITLE_FIELD3'));
    }
}
