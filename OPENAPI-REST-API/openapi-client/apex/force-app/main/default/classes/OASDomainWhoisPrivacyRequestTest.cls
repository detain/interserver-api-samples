@isTest
private class OASDomainWhoisPrivacyRequestTest {
    @isTest
    private static void equalsSameInstance() {
        OASDomainWhoisPrivacyRequest domainWhoisPrivacyRequest1 = OASDomainWhoisPrivacyRequest.getExample();
        OASDomainWhoisPrivacyRequest domainWhoisPrivacyRequest2 = domainWhoisPrivacyRequest1;
        OASDomainWhoisPrivacyRequest domainWhoisPrivacyRequest3 = new OASDomainWhoisPrivacyRequest();
        OASDomainWhoisPrivacyRequest domainWhoisPrivacyRequest4 = domainWhoisPrivacyRequest3;

        System.assert(domainWhoisPrivacyRequest1.equals(domainWhoisPrivacyRequest2));
        System.assert(domainWhoisPrivacyRequest2.equals(domainWhoisPrivacyRequest1));
        System.assert(domainWhoisPrivacyRequest1.equals(domainWhoisPrivacyRequest1));
        System.assert(domainWhoisPrivacyRequest3.equals(domainWhoisPrivacyRequest4));
        System.assert(domainWhoisPrivacyRequest4.equals(domainWhoisPrivacyRequest3));
        System.assert(domainWhoisPrivacyRequest3.equals(domainWhoisPrivacyRequest3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASDomainWhoisPrivacyRequest domainWhoisPrivacyRequest1 = OASDomainWhoisPrivacyRequest.getExample();
        OASDomainWhoisPrivacyRequest domainWhoisPrivacyRequest2 = OASDomainWhoisPrivacyRequest.getExample();
        OASDomainWhoisPrivacyRequest domainWhoisPrivacyRequest3 = new OASDomainWhoisPrivacyRequest();
        OASDomainWhoisPrivacyRequest domainWhoisPrivacyRequest4 = new OASDomainWhoisPrivacyRequest();

        System.assert(domainWhoisPrivacyRequest1.equals(domainWhoisPrivacyRequest2));
        System.assert(domainWhoisPrivacyRequest2.equals(domainWhoisPrivacyRequest1));
        System.assert(domainWhoisPrivacyRequest3.equals(domainWhoisPrivacyRequest4));
        System.assert(domainWhoisPrivacyRequest4.equals(domainWhoisPrivacyRequest3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASDomainWhoisPrivacyRequest domainWhoisPrivacyRequest1 = OASDomainWhoisPrivacyRequest.getExample();
        OASDomainWhoisPrivacyRequest domainWhoisPrivacyRequest2 = new OASDomainWhoisPrivacyRequest();

        System.assertEquals(false, domainWhoisPrivacyRequest1.equals('foo'));
        System.assertEquals(false, domainWhoisPrivacyRequest2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASDomainWhoisPrivacyRequest domainWhoisPrivacyRequest1 = OASDomainWhoisPrivacyRequest.getExample();
        OASDomainWhoisPrivacyRequest domainWhoisPrivacyRequest2 = new OASDomainWhoisPrivacyRequest();
        OASDomainWhoisPrivacyRequest domainWhoisPrivacyRequest3;

        System.assertEquals(false, domainWhoisPrivacyRequest1.equals(domainWhoisPrivacyRequest3));
        System.assertEquals(false, domainWhoisPrivacyRequest2.equals(domainWhoisPrivacyRequest3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASDomainWhoisPrivacyRequest domainWhoisPrivacyRequest1 = OASDomainWhoisPrivacyRequest.getExample();
        OASDomainWhoisPrivacyRequest domainWhoisPrivacyRequest2 = new OASDomainWhoisPrivacyRequest();

        System.assertEquals(domainWhoisPrivacyRequest1.hashCode(), domainWhoisPrivacyRequest1.hashCode());
        System.assertEquals(domainWhoisPrivacyRequest2.hashCode(), domainWhoisPrivacyRequest2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASDomainWhoisPrivacyRequest domainWhoisPrivacyRequest1 = OASDomainWhoisPrivacyRequest.getExample();
        OASDomainWhoisPrivacyRequest domainWhoisPrivacyRequest2 = OASDomainWhoisPrivacyRequest.getExample();
        OASDomainWhoisPrivacyRequest domainWhoisPrivacyRequest3 = new OASDomainWhoisPrivacyRequest();
        OASDomainWhoisPrivacyRequest domainWhoisPrivacyRequest4 = new OASDomainWhoisPrivacyRequest();

        System.assert(domainWhoisPrivacyRequest1.equals(domainWhoisPrivacyRequest2));
        System.assert(domainWhoisPrivacyRequest3.equals(domainWhoisPrivacyRequest4));
        System.assertEquals(domainWhoisPrivacyRequest1.hashCode(), domainWhoisPrivacyRequest2.hashCode());
        System.assertEquals(domainWhoisPrivacyRequest3.hashCode(), domainWhoisPrivacyRequest4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASDomainWhoisPrivacyRequest domainWhoisPrivacyRequest = new OASDomainWhoisPrivacyRequest();
        Map<String, String> x-property-mappings = domainWhoisPrivacyRequest.getx-property-mappings();
        System.assertEquals('csrfToken', x-property-mappings.get('csrf_token'));
        System.assertEquals('domainFirstname', x-property-mappings.get('domain_firstname'));
        System.assertEquals('domainLastname', x-property-mappings.get('domain_lastname'));
        System.assertEquals('domainEmail', x-property-mappings.get('domain_email'));
        System.assertEquals('domainAddress', x-property-mappings.get('domain_address'));
        System.assertEquals('domainAddress2', x-property-mappings.get('domain_address2'));
        System.assertEquals('domainAddress3', x-property-mappings.get('domain_address3'));
        System.assertEquals('domainCity', x-property-mappings.get('domain_city'));
        System.assertEquals('domainState', x-property-mappings.get('domain_state'));
        System.assertEquals('domainZip', x-property-mappings.get('domain_zip'));
        System.assertEquals('domainCountry', x-property-mappings.get('domain_country'));
        System.assertEquals('domainPhone', x-property-mappings.get('domain_phone'));
        System.assertEquals('domainFax', x-property-mappings.get('domain_fax'));
        System.assertEquals('domainCompany', x-property-mappings.get('domain_company'));
        System.assertEquals('domainExtra', x-property-mappings.get('domain_extra'));
    }
}
