@isTest
private class OASVpsOrderTemplatesHypervWindowsTest {
    @isTest
    private static void equalsSameInstance() {
        OASVpsOrderTemplatesHypervWindows vpsOrderTemplatesHypervWindows1 = OASVpsOrderTemplatesHypervWindows.getExample();
        OASVpsOrderTemplatesHypervWindows vpsOrderTemplatesHypervWindows2 = vpsOrderTemplatesHypervWindows1;
        OASVpsOrderTemplatesHypervWindows vpsOrderTemplatesHypervWindows3 = new OASVpsOrderTemplatesHypervWindows();
        OASVpsOrderTemplatesHypervWindows vpsOrderTemplatesHypervWindows4 = vpsOrderTemplatesHypervWindows3;

        System.assert(vpsOrderTemplatesHypervWindows1.equals(vpsOrderTemplatesHypervWindows2));
        System.assert(vpsOrderTemplatesHypervWindows2.equals(vpsOrderTemplatesHypervWindows1));
        System.assert(vpsOrderTemplatesHypervWindows1.equals(vpsOrderTemplatesHypervWindows1));
        System.assert(vpsOrderTemplatesHypervWindows3.equals(vpsOrderTemplatesHypervWindows4));
        System.assert(vpsOrderTemplatesHypervWindows4.equals(vpsOrderTemplatesHypervWindows3));
        System.assert(vpsOrderTemplatesHypervWindows3.equals(vpsOrderTemplatesHypervWindows3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASVpsOrderTemplatesHypervWindows vpsOrderTemplatesHypervWindows1 = OASVpsOrderTemplatesHypervWindows.getExample();
        OASVpsOrderTemplatesHypervWindows vpsOrderTemplatesHypervWindows2 = OASVpsOrderTemplatesHypervWindows.getExample();
        OASVpsOrderTemplatesHypervWindows vpsOrderTemplatesHypervWindows3 = new OASVpsOrderTemplatesHypervWindows();
        OASVpsOrderTemplatesHypervWindows vpsOrderTemplatesHypervWindows4 = new OASVpsOrderTemplatesHypervWindows();

        System.assert(vpsOrderTemplatesHypervWindows1.equals(vpsOrderTemplatesHypervWindows2));
        System.assert(vpsOrderTemplatesHypervWindows2.equals(vpsOrderTemplatesHypervWindows1));
        System.assert(vpsOrderTemplatesHypervWindows3.equals(vpsOrderTemplatesHypervWindows4));
        System.assert(vpsOrderTemplatesHypervWindows4.equals(vpsOrderTemplatesHypervWindows3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASVpsOrderTemplatesHypervWindows vpsOrderTemplatesHypervWindows1 = OASVpsOrderTemplatesHypervWindows.getExample();
        OASVpsOrderTemplatesHypervWindows vpsOrderTemplatesHypervWindows2 = new OASVpsOrderTemplatesHypervWindows();

        System.assertEquals(false, vpsOrderTemplatesHypervWindows1.equals('foo'));
        System.assertEquals(false, vpsOrderTemplatesHypervWindows2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASVpsOrderTemplatesHypervWindows vpsOrderTemplatesHypervWindows1 = OASVpsOrderTemplatesHypervWindows.getExample();
        OASVpsOrderTemplatesHypervWindows vpsOrderTemplatesHypervWindows2 = new OASVpsOrderTemplatesHypervWindows();
        OASVpsOrderTemplatesHypervWindows vpsOrderTemplatesHypervWindows3;

        System.assertEquals(false, vpsOrderTemplatesHypervWindows1.equals(vpsOrderTemplatesHypervWindows3));
        System.assertEquals(false, vpsOrderTemplatesHypervWindows2.equals(vpsOrderTemplatesHypervWindows3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASVpsOrderTemplatesHypervWindows vpsOrderTemplatesHypervWindows1 = OASVpsOrderTemplatesHypervWindows.getExample();
        OASVpsOrderTemplatesHypervWindows vpsOrderTemplatesHypervWindows2 = new OASVpsOrderTemplatesHypervWindows();

        System.assertEquals(vpsOrderTemplatesHypervWindows1.hashCode(), vpsOrderTemplatesHypervWindows1.hashCode());
        System.assertEquals(vpsOrderTemplatesHypervWindows2.hashCode(), vpsOrderTemplatesHypervWindows2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASVpsOrderTemplatesHypervWindows vpsOrderTemplatesHypervWindows1 = OASVpsOrderTemplatesHypervWindows.getExample();
        OASVpsOrderTemplatesHypervWindows vpsOrderTemplatesHypervWindows2 = OASVpsOrderTemplatesHypervWindows.getExample();
        OASVpsOrderTemplatesHypervWindows vpsOrderTemplatesHypervWindows3 = new OASVpsOrderTemplatesHypervWindows();
        OASVpsOrderTemplatesHypervWindows vpsOrderTemplatesHypervWindows4 = new OASVpsOrderTemplatesHypervWindows();

        System.assert(vpsOrderTemplatesHypervWindows1.equals(vpsOrderTemplatesHypervWindows2));
        System.assert(vpsOrderTemplatesHypervWindows3.equals(vpsOrderTemplatesHypervWindows4));
        System.assertEquals(vpsOrderTemplatesHypervWindows1.hashCode(), vpsOrderTemplatesHypervWindows2.hashCode());
        System.assertEquals(vpsOrderTemplatesHypervWindows3.hashCode(), vpsOrderTemplatesHypervWindows4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASVpsOrderTemplatesHypervWindows vpsOrderTemplatesHypervWindows = new OASVpsOrderTemplatesHypervWindows();
        Map<String, String> x-property-mappings = vpsOrderTemplatesHypervWindows.getx-property-mappings();
        System.assertEquals('windows2019Standard', x-property-mappings.get('Windows2019Standard'));
        System.assertEquals('windows2022', x-property-mappings.get('Windows2022'));
    }
}
