@isTest
private class OASVpsDALicenseTest {
    @isTest
    private static void equalsSameInstance() {
        OASVpsDALicense vpsDALicense1 = OASVpsDALicense.getExample();
        OASVpsDALicense vpsDALicense2 = vpsDALicense1;
        OASVpsDALicense vpsDALicense3 = new OASVpsDALicense();
        OASVpsDALicense vpsDALicense4 = vpsDALicense3;

        System.assert(vpsDALicense1.equals(vpsDALicense2));
        System.assert(vpsDALicense2.equals(vpsDALicense1));
        System.assert(vpsDALicense1.equals(vpsDALicense1));
        System.assert(vpsDALicense3.equals(vpsDALicense4));
        System.assert(vpsDALicense4.equals(vpsDALicense3));
        System.assert(vpsDALicense3.equals(vpsDALicense3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASVpsDALicense vpsDALicense1 = OASVpsDALicense.getExample();
        OASVpsDALicense vpsDALicense2 = OASVpsDALicense.getExample();
        OASVpsDALicense vpsDALicense3 = new OASVpsDALicense();
        OASVpsDALicense vpsDALicense4 = new OASVpsDALicense();

        System.assert(vpsDALicense1.equals(vpsDALicense2));
        System.assert(vpsDALicense2.equals(vpsDALicense1));
        System.assert(vpsDALicense3.equals(vpsDALicense4));
        System.assert(vpsDALicense4.equals(vpsDALicense3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASVpsDALicense vpsDALicense1 = OASVpsDALicense.getExample();
        OASVpsDALicense vpsDALicense2 = new OASVpsDALicense();

        System.assertEquals(false, vpsDALicense1.equals('foo'));
        System.assertEquals(false, vpsDALicense2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASVpsDALicense vpsDALicense1 = OASVpsDALicense.getExample();
        OASVpsDALicense vpsDALicense2 = new OASVpsDALicense();
        OASVpsDALicense vpsDALicense3;

        System.assertEquals(false, vpsDALicense1.equals(vpsDALicense3));
        System.assertEquals(false, vpsDALicense2.equals(vpsDALicense3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASVpsDALicense vpsDALicense1 = OASVpsDALicense.getExample();
        OASVpsDALicense vpsDALicense2 = new OASVpsDALicense();

        System.assertEquals(vpsDALicense1.hashCode(), vpsDALicense1.hashCode());
        System.assertEquals(vpsDALicense2.hashCode(), vpsDALicense2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASVpsDALicense vpsDALicense1 = OASVpsDALicense.getExample();
        OASVpsDALicense vpsDALicense2 = OASVpsDALicense.getExample();
        OASVpsDALicense vpsDALicense3 = new OASVpsDALicense();
        OASVpsDALicense vpsDALicense4 = new OASVpsDALicense();

        System.assert(vpsDALicense1.equals(vpsDALicense2));
        System.assert(vpsDALicense3.equals(vpsDALicense4));
        System.assertEquals(vpsDALicense1.hashCode(), vpsDALicense2.hashCode());
        System.assertEquals(vpsDALicense3.hashCode(), vpsDALicense4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASVpsDALicense vpsDALicense = new OASVpsDALicense();
        Map<String, String> x-property-mappings = vpsDALicense.getx-property-mappings();
        System.assertEquals('subName', x-property-mappings.get('sub_name'));
        System.assertEquals('imgDisabled', x-property-mappings.get('img_disabled'));
        System.assertEquals('imgActive', x-property-mappings.get('img_active'));
    }
}
