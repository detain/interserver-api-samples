@isTest
private class OASAccountInfoCountryCurrenciesTest {
    @isTest
    private static void equalsSameInstance() {
        OASAccountInfoCountryCurrencies accountInfoCountryCurrencies1 = OASAccountInfoCountryCurrencies.getExample();
        OASAccountInfoCountryCurrencies accountInfoCountryCurrencies2 = accountInfoCountryCurrencies1;
        OASAccountInfoCountryCurrencies accountInfoCountryCurrencies3 = new OASAccountInfoCountryCurrencies();
        OASAccountInfoCountryCurrencies accountInfoCountryCurrencies4 = accountInfoCountryCurrencies3;

        System.assert(accountInfoCountryCurrencies1.equals(accountInfoCountryCurrencies2));
        System.assert(accountInfoCountryCurrencies2.equals(accountInfoCountryCurrencies1));
        System.assert(accountInfoCountryCurrencies1.equals(accountInfoCountryCurrencies1));
        System.assert(accountInfoCountryCurrencies3.equals(accountInfoCountryCurrencies4));
        System.assert(accountInfoCountryCurrencies4.equals(accountInfoCountryCurrencies3));
        System.assert(accountInfoCountryCurrencies3.equals(accountInfoCountryCurrencies3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASAccountInfoCountryCurrencies accountInfoCountryCurrencies1 = OASAccountInfoCountryCurrencies.getExample();
        OASAccountInfoCountryCurrencies accountInfoCountryCurrencies2 = OASAccountInfoCountryCurrencies.getExample();
        OASAccountInfoCountryCurrencies accountInfoCountryCurrencies3 = new OASAccountInfoCountryCurrencies();
        OASAccountInfoCountryCurrencies accountInfoCountryCurrencies4 = new OASAccountInfoCountryCurrencies();

        System.assert(accountInfoCountryCurrencies1.equals(accountInfoCountryCurrencies2));
        System.assert(accountInfoCountryCurrencies2.equals(accountInfoCountryCurrencies1));
        System.assert(accountInfoCountryCurrencies3.equals(accountInfoCountryCurrencies4));
        System.assert(accountInfoCountryCurrencies4.equals(accountInfoCountryCurrencies3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASAccountInfoCountryCurrencies accountInfoCountryCurrencies1 = OASAccountInfoCountryCurrencies.getExample();
        OASAccountInfoCountryCurrencies accountInfoCountryCurrencies2 = new OASAccountInfoCountryCurrencies();

        System.assertEquals(false, accountInfoCountryCurrencies1.equals('foo'));
        System.assertEquals(false, accountInfoCountryCurrencies2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASAccountInfoCountryCurrencies accountInfoCountryCurrencies1 = OASAccountInfoCountryCurrencies.getExample();
        OASAccountInfoCountryCurrencies accountInfoCountryCurrencies2 = new OASAccountInfoCountryCurrencies();
        OASAccountInfoCountryCurrencies accountInfoCountryCurrencies3;

        System.assertEquals(false, accountInfoCountryCurrencies1.equals(accountInfoCountryCurrencies3));
        System.assertEquals(false, accountInfoCountryCurrencies2.equals(accountInfoCountryCurrencies3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASAccountInfoCountryCurrencies accountInfoCountryCurrencies1 = OASAccountInfoCountryCurrencies.getExample();
        OASAccountInfoCountryCurrencies accountInfoCountryCurrencies2 = new OASAccountInfoCountryCurrencies();

        System.assertEquals(accountInfoCountryCurrencies1.hashCode(), accountInfoCountryCurrencies1.hashCode());
        System.assertEquals(accountInfoCountryCurrencies2.hashCode(), accountInfoCountryCurrencies2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASAccountInfoCountryCurrencies accountInfoCountryCurrencies1 = OASAccountInfoCountryCurrencies.getExample();
        OASAccountInfoCountryCurrencies accountInfoCountryCurrencies2 = OASAccountInfoCountryCurrencies.getExample();
        OASAccountInfoCountryCurrencies accountInfoCountryCurrencies3 = new OASAccountInfoCountryCurrencies();
        OASAccountInfoCountryCurrencies accountInfoCountryCurrencies4 = new OASAccountInfoCountryCurrencies();

        System.assert(accountInfoCountryCurrencies1.equals(accountInfoCountryCurrencies2));
        System.assert(accountInfoCountryCurrencies3.equals(accountInfoCountryCurrencies4));
        System.assertEquals(accountInfoCountryCurrencies1.hashCode(), accountInfoCountryCurrencies2.hashCode());
        System.assertEquals(accountInfoCountryCurrencies3.hashCode(), accountInfoCountryCurrencies4.hashCode());
    }
}
