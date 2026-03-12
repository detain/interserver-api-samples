@isTest
private class OASVpsPleskLicenseTest {
    @isTest
    private static void equalsSameInstance() {
        OASVpsPleskLicense vpsPleskLicense1 = OASVpsPleskLicense.getExample();
        OASVpsPleskLicense vpsPleskLicense2 = vpsPleskLicense1;
        OASVpsPleskLicense vpsPleskLicense3 = new OASVpsPleskLicense();
        OASVpsPleskLicense vpsPleskLicense4 = vpsPleskLicense3;

        System.assert(vpsPleskLicense1.equals(vpsPleskLicense2));
        System.assert(vpsPleskLicense2.equals(vpsPleskLicense1));
        System.assert(vpsPleskLicense1.equals(vpsPleskLicense1));
        System.assert(vpsPleskLicense3.equals(vpsPleskLicense4));
        System.assert(vpsPleskLicense4.equals(vpsPleskLicense3));
        System.assert(vpsPleskLicense3.equals(vpsPleskLicense3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASVpsPleskLicense vpsPleskLicense1 = OASVpsPleskLicense.getExample();
        OASVpsPleskLicense vpsPleskLicense2 = OASVpsPleskLicense.getExample();
        OASVpsPleskLicense vpsPleskLicense3 = new OASVpsPleskLicense();
        OASVpsPleskLicense vpsPleskLicense4 = new OASVpsPleskLicense();

        System.assert(vpsPleskLicense1.equals(vpsPleskLicense2));
        System.assert(vpsPleskLicense2.equals(vpsPleskLicense1));
        System.assert(vpsPleskLicense3.equals(vpsPleskLicense4));
        System.assert(vpsPleskLicense4.equals(vpsPleskLicense3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASVpsPleskLicense vpsPleskLicense1 = OASVpsPleskLicense.getExample();
        OASVpsPleskLicense vpsPleskLicense2 = new OASVpsPleskLicense();

        System.assertEquals(false, vpsPleskLicense1.equals('foo'));
        System.assertEquals(false, vpsPleskLicense2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASVpsPleskLicense vpsPleskLicense1 = OASVpsPleskLicense.getExample();
        OASVpsPleskLicense vpsPleskLicense2 = new OASVpsPleskLicense();
        OASVpsPleskLicense vpsPleskLicense3;

        System.assertEquals(false, vpsPleskLicense1.equals(vpsPleskLicense3));
        System.assertEquals(false, vpsPleskLicense2.equals(vpsPleskLicense3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASVpsPleskLicense vpsPleskLicense1 = OASVpsPleskLicense.getExample();
        OASVpsPleskLicense vpsPleskLicense2 = new OASVpsPleskLicense();

        System.assertEquals(vpsPleskLicense1.hashCode(), vpsPleskLicense1.hashCode());
        System.assertEquals(vpsPleskLicense2.hashCode(), vpsPleskLicense2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASVpsPleskLicense vpsPleskLicense1 = OASVpsPleskLicense.getExample();
        OASVpsPleskLicense vpsPleskLicense2 = OASVpsPleskLicense.getExample();
        OASVpsPleskLicense vpsPleskLicense3 = new OASVpsPleskLicense();
        OASVpsPleskLicense vpsPleskLicense4 = new OASVpsPleskLicense();

        System.assert(vpsPleskLicense1.equals(vpsPleskLicense2));
        System.assert(vpsPleskLicense3.equals(vpsPleskLicense4));
        System.assertEquals(vpsPleskLicense1.hashCode(), vpsPleskLicense2.hashCode());
        System.assertEquals(vpsPleskLicense3.hashCode(), vpsPleskLicense4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASVpsPleskLicense vpsPleskLicense = new OASVpsPleskLicense();
        Map<String, String> x-property-mappings = vpsPleskLicense.getx-property-mappings();
        System.assertEquals('subName', x-property-mappings.get('sub_name'));
    }
}
