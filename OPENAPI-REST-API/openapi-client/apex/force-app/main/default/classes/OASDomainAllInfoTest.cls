@isTest
private class OASDomainAllInfoTest {
    @isTest
    private static void equalsSameInstance() {
        OASDomainAllInfo domainAllInfo1 = OASDomainAllInfo.getExample();
        OASDomainAllInfo domainAllInfo2 = domainAllInfo1;
        OASDomainAllInfo domainAllInfo3 = new OASDomainAllInfo();
        OASDomainAllInfo domainAllInfo4 = domainAllInfo3;

        System.assert(domainAllInfo1.equals(domainAllInfo2));
        System.assert(domainAllInfo2.equals(domainAllInfo1));
        System.assert(domainAllInfo1.equals(domainAllInfo1));
        System.assert(domainAllInfo3.equals(domainAllInfo4));
        System.assert(domainAllInfo4.equals(domainAllInfo3));
        System.assert(domainAllInfo3.equals(domainAllInfo3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASDomainAllInfo domainAllInfo1 = OASDomainAllInfo.getExample();
        OASDomainAllInfo domainAllInfo2 = OASDomainAllInfo.getExample();
        OASDomainAllInfo domainAllInfo3 = new OASDomainAllInfo();
        OASDomainAllInfo domainAllInfo4 = new OASDomainAllInfo();

        System.assert(domainAllInfo1.equals(domainAllInfo2));
        System.assert(domainAllInfo2.equals(domainAllInfo1));
        System.assert(domainAllInfo3.equals(domainAllInfo4));
        System.assert(domainAllInfo4.equals(domainAllInfo3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASDomainAllInfo domainAllInfo1 = OASDomainAllInfo.getExample();
        OASDomainAllInfo domainAllInfo2 = new OASDomainAllInfo();

        System.assertEquals(false, domainAllInfo1.equals('foo'));
        System.assertEquals(false, domainAllInfo2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASDomainAllInfo domainAllInfo1 = OASDomainAllInfo.getExample();
        OASDomainAllInfo domainAllInfo2 = new OASDomainAllInfo();
        OASDomainAllInfo domainAllInfo3;

        System.assertEquals(false, domainAllInfo1.equals(domainAllInfo3));
        System.assertEquals(false, domainAllInfo2.equals(domainAllInfo3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASDomainAllInfo domainAllInfo1 = OASDomainAllInfo.getExample();
        OASDomainAllInfo domainAllInfo2 = new OASDomainAllInfo();

        System.assertEquals(domainAllInfo1.hashCode(), domainAllInfo1.hashCode());
        System.assertEquals(domainAllInfo2.hashCode(), domainAllInfo2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASDomainAllInfo domainAllInfo1 = OASDomainAllInfo.getExample();
        OASDomainAllInfo domainAllInfo2 = OASDomainAllInfo.getExample();
        OASDomainAllInfo domainAllInfo3 = new OASDomainAllInfo();
        OASDomainAllInfo domainAllInfo4 = new OASDomainAllInfo();

        System.assert(domainAllInfo1.equals(domainAllInfo2));
        System.assert(domainAllInfo3.equals(domainAllInfo4));
        System.assertEquals(domainAllInfo1.hashCode(), domainAllInfo2.hashCode());
        System.assertEquals(domainAllInfo3.hashCode(), domainAllInfo4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASDomainAllInfo domainAllInfo = new OASDomainAllInfo();
        Map<String, String> x-property-mappings = domainAllInfo.getx-property-mappings();
        System.assertEquals('oPSVersion', x-property-mappings.get('_OPS_version'));
        System.assertEquals('r_object', x-property-mappings.get('object'));
        System.assertEquals('responseText', x-property-mappings.get('response_text'));
        System.assertEquals('responseCode', x-property-mappings.get('response_code'));
        System.assertEquals('isSuccess', x-property-mappings.get('is_success'));
    }
}
