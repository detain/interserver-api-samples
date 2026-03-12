@isTest
private class OASVpsOrderTemplatesTest {
    @isTest
    private static void equalsSameInstance() {
        OASVpsOrderTemplates vpsOrderTemplates1 = OASVpsOrderTemplates.getExample();
        OASVpsOrderTemplates vpsOrderTemplates2 = vpsOrderTemplates1;
        OASVpsOrderTemplates vpsOrderTemplates3 = new OASVpsOrderTemplates();
        OASVpsOrderTemplates vpsOrderTemplates4 = vpsOrderTemplates3;

        System.assert(vpsOrderTemplates1.equals(vpsOrderTemplates2));
        System.assert(vpsOrderTemplates2.equals(vpsOrderTemplates1));
        System.assert(vpsOrderTemplates1.equals(vpsOrderTemplates1));
        System.assert(vpsOrderTemplates3.equals(vpsOrderTemplates4));
        System.assert(vpsOrderTemplates4.equals(vpsOrderTemplates3));
        System.assert(vpsOrderTemplates3.equals(vpsOrderTemplates3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASVpsOrderTemplates vpsOrderTemplates1 = OASVpsOrderTemplates.getExample();
        OASVpsOrderTemplates vpsOrderTemplates2 = OASVpsOrderTemplates.getExample();
        OASVpsOrderTemplates vpsOrderTemplates3 = new OASVpsOrderTemplates();
        OASVpsOrderTemplates vpsOrderTemplates4 = new OASVpsOrderTemplates();

        System.assert(vpsOrderTemplates1.equals(vpsOrderTemplates2));
        System.assert(vpsOrderTemplates2.equals(vpsOrderTemplates1));
        System.assert(vpsOrderTemplates3.equals(vpsOrderTemplates4));
        System.assert(vpsOrderTemplates4.equals(vpsOrderTemplates3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASVpsOrderTemplates vpsOrderTemplates1 = OASVpsOrderTemplates.getExample();
        OASVpsOrderTemplates vpsOrderTemplates2 = new OASVpsOrderTemplates();

        System.assertEquals(false, vpsOrderTemplates1.equals('foo'));
        System.assertEquals(false, vpsOrderTemplates2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASVpsOrderTemplates vpsOrderTemplates1 = OASVpsOrderTemplates.getExample();
        OASVpsOrderTemplates vpsOrderTemplates2 = new OASVpsOrderTemplates();
        OASVpsOrderTemplates vpsOrderTemplates3;

        System.assertEquals(false, vpsOrderTemplates1.equals(vpsOrderTemplates3));
        System.assertEquals(false, vpsOrderTemplates2.equals(vpsOrderTemplates3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASVpsOrderTemplates vpsOrderTemplates1 = OASVpsOrderTemplates.getExample();
        OASVpsOrderTemplates vpsOrderTemplates2 = new OASVpsOrderTemplates();

        System.assertEquals(vpsOrderTemplates1.hashCode(), vpsOrderTemplates1.hashCode());
        System.assertEquals(vpsOrderTemplates2.hashCode(), vpsOrderTemplates2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASVpsOrderTemplates vpsOrderTemplates1 = OASVpsOrderTemplates.getExample();
        OASVpsOrderTemplates vpsOrderTemplates2 = OASVpsOrderTemplates.getExample();
        OASVpsOrderTemplates vpsOrderTemplates3 = new OASVpsOrderTemplates();
        OASVpsOrderTemplates vpsOrderTemplates4 = new OASVpsOrderTemplates();

        System.assert(vpsOrderTemplates1.equals(vpsOrderTemplates2));
        System.assert(vpsOrderTemplates3.equals(vpsOrderTemplates4));
        System.assertEquals(vpsOrderTemplates1.hashCode(), vpsOrderTemplates2.hashCode());
        System.assertEquals(vpsOrderTemplates3.hashCode(), vpsOrderTemplates4.hashCode());
    }
}
