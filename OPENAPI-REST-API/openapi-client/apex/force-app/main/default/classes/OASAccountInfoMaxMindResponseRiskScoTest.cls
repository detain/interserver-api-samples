@isTest
private class OASAccountInfoMaxMindResponseRiskScoTest {
    @isTest
    private static void equalsSameInstance() {
        OASAccountInfoMaxMindResponseRiskSco accountInfoMaxMindResponseRiskScore1 = OASAccountInfoMaxMindResponseRiskSco.getExample();
        OASAccountInfoMaxMindResponseRiskSco accountInfoMaxMindResponseRiskScore2 = accountInfoMaxMindResponseRiskScore1;
        OASAccountInfoMaxMindResponseRiskSco accountInfoMaxMindResponseRiskScore3 = new OASAccountInfoMaxMindResponseRiskSco();
        OASAccountInfoMaxMindResponseRiskSco accountInfoMaxMindResponseRiskScore4 = accountInfoMaxMindResponseRiskScore3;

        System.assert(accountInfoMaxMindResponseRiskScore1.equals(accountInfoMaxMindResponseRiskScore2));
        System.assert(accountInfoMaxMindResponseRiskScore2.equals(accountInfoMaxMindResponseRiskScore1));
        System.assert(accountInfoMaxMindResponseRiskScore1.equals(accountInfoMaxMindResponseRiskScore1));
        System.assert(accountInfoMaxMindResponseRiskScore3.equals(accountInfoMaxMindResponseRiskScore4));
        System.assert(accountInfoMaxMindResponseRiskScore4.equals(accountInfoMaxMindResponseRiskScore3));
        System.assert(accountInfoMaxMindResponseRiskScore3.equals(accountInfoMaxMindResponseRiskScore3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASAccountInfoMaxMindResponseRiskSco accountInfoMaxMindResponseRiskScore1 = OASAccountInfoMaxMindResponseRiskSco.getExample();
        OASAccountInfoMaxMindResponseRiskSco accountInfoMaxMindResponseRiskScore2 = OASAccountInfoMaxMindResponseRiskSco.getExample();
        OASAccountInfoMaxMindResponseRiskSco accountInfoMaxMindResponseRiskScore3 = new OASAccountInfoMaxMindResponseRiskSco();
        OASAccountInfoMaxMindResponseRiskSco accountInfoMaxMindResponseRiskScore4 = new OASAccountInfoMaxMindResponseRiskSco();

        System.assert(accountInfoMaxMindResponseRiskScore1.equals(accountInfoMaxMindResponseRiskScore2));
        System.assert(accountInfoMaxMindResponseRiskScore2.equals(accountInfoMaxMindResponseRiskScore1));
        System.assert(accountInfoMaxMindResponseRiskScore3.equals(accountInfoMaxMindResponseRiskScore4));
        System.assert(accountInfoMaxMindResponseRiskScore4.equals(accountInfoMaxMindResponseRiskScore3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASAccountInfoMaxMindResponseRiskSco accountInfoMaxMindResponseRiskScore1 = OASAccountInfoMaxMindResponseRiskSco.getExample();
        OASAccountInfoMaxMindResponseRiskSco accountInfoMaxMindResponseRiskScore2 = new OASAccountInfoMaxMindResponseRiskSco();

        System.assertEquals(false, accountInfoMaxMindResponseRiskScore1.equals('foo'));
        System.assertEquals(false, accountInfoMaxMindResponseRiskScore2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASAccountInfoMaxMindResponseRiskSco accountInfoMaxMindResponseRiskScore1 = OASAccountInfoMaxMindResponseRiskSco.getExample();
        OASAccountInfoMaxMindResponseRiskSco accountInfoMaxMindResponseRiskScore2 = new OASAccountInfoMaxMindResponseRiskSco();
        OASAccountInfoMaxMindResponseRiskSco accountInfoMaxMindResponseRiskScore3;

        System.assertEquals(false, accountInfoMaxMindResponseRiskScore1.equals(accountInfoMaxMindResponseRiskScore3));
        System.assertEquals(false, accountInfoMaxMindResponseRiskScore2.equals(accountInfoMaxMindResponseRiskScore3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASAccountInfoMaxMindResponseRiskSco accountInfoMaxMindResponseRiskScore1 = OASAccountInfoMaxMindResponseRiskSco.getExample();
        OASAccountInfoMaxMindResponseRiskSco accountInfoMaxMindResponseRiskScore2 = new OASAccountInfoMaxMindResponseRiskSco();

        System.assertEquals(accountInfoMaxMindResponseRiskScore1.hashCode(), accountInfoMaxMindResponseRiskScore1.hashCode());
        System.assertEquals(accountInfoMaxMindResponseRiskScore2.hashCode(), accountInfoMaxMindResponseRiskScore2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASAccountInfoMaxMindResponseRiskSco accountInfoMaxMindResponseRiskScore1 = OASAccountInfoMaxMindResponseRiskSco.getExample();
        OASAccountInfoMaxMindResponseRiskSco accountInfoMaxMindResponseRiskScore2 = OASAccountInfoMaxMindResponseRiskSco.getExample();
        OASAccountInfoMaxMindResponseRiskSco accountInfoMaxMindResponseRiskScore3 = new OASAccountInfoMaxMindResponseRiskSco();
        OASAccountInfoMaxMindResponseRiskSco accountInfoMaxMindResponseRiskScore4 = new OASAccountInfoMaxMindResponseRiskSco();

        System.assert(accountInfoMaxMindResponseRiskScore1.equals(accountInfoMaxMindResponseRiskScore2));
        System.assert(accountInfoMaxMindResponseRiskScore3.equals(accountInfoMaxMindResponseRiskScore4));
        System.assertEquals(accountInfoMaxMindResponseRiskScore1.hashCode(), accountInfoMaxMindResponseRiskScore2.hashCode());
        System.assertEquals(accountInfoMaxMindResponseRiskScore3.hashCode(), accountInfoMaxMindResponseRiskScore4.hashCode());
    }
}
