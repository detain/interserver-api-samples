//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/account_info_max_mind_response.dart';
import 'package:openapi/src/model/account_info_data_fraudrecord.dart';
import 'package:openapi/src/model/account_info_data_email_settings.dart';
import 'package:openapi/src/model/account_info_data_ccs.dart';
import 'package:openapi/src/model/account_info_data_extra.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'account_info_data.g.dart';

/// Detailed account profile data including contact info, billing, API keys, and security settings.
///
/// Properties:
/// * [group] 
/// * [address] 
/// * [city] 
/// * [country] 
/// * [disableCc] 
/// * [fraudrecordScore] 
/// * [ima] 
/// * [name] 
/// * [paymentMethod] 
/// * [phone] 
/// * [pin] 
/// * [state] 
/// * [status] 
/// * [zip] 
/// * [accountId] 
/// * [accountLid] 
/// * [address2] 
/// * [affiliateDockDescription] 
/// * [affiliateDockTitle] 
/// * [affiliatePaymentMethod] 
/// * [affiliatePaypal] 
/// * [cc] 
/// * [ccAuto] 
/// * [ccExp] 
/// * [ccType] 
/// * [ccWhitelist] 
/// * [ccs] 
/// * [ccsAdded] 
/// * [company] 
/// * [currency] 
/// * [disableReinstall] 
/// * [disableReset] 
/// * [email] 
/// * [emailAbuse] 
/// * [emailSettings] 
/// * [extra] 
/// * [facebookId] 
/// * [facebookUrl] 
/// * [firstname] 
/// * [fraudrecord] 
/// * [githubId] 
/// * [githubUrl] 
/// * [googleId] 
/// * [googleUrl] 
/// * [innertellId] 
/// * [lastname] 
/// * [locale] 
/// * [maxmind] 
/// * [maxmindScore] 
/// * [mbId] 
/// * [modernbillId] 
/// * [picture] 
/// * [referrerCoupon] 
/// * [resellerMarkup] 
/// * [username] 
/// * [sshKey] 
/// * [sshKeyWrapped] 
/// * [apiKey] 
/// * [apiKeyWrapped] 
/// * [n2faGoogleKey] 
/// * [n2faGoogleEnabled] 
/// * [n2faGoogle] 
/// * [n2faGoogleSplit] 
/// * [n2faGoogleQr] 
@BuiltValue()
abstract class AccountInfoData implements Built<AccountInfoData, AccountInfoDataBuilder> {
  @BuiltValueField(wireName: r'group')
  String? get group;

  @BuiltValueField(wireName: r'address')
  String? get address;

  @BuiltValueField(wireName: r'city')
  String? get city;

  @BuiltValueField(wireName: r'country')
  String? get country;

  @BuiltValueField(wireName: r'disable_cc')
  String? get disableCc;

  @BuiltValueField(wireName: r'fraudrecord_score')
  String? get fraudrecordScore;

  @BuiltValueField(wireName: r'ima')
  String? get ima;

  @BuiltValueField(wireName: r'name')
  String? get name;

  @BuiltValueField(wireName: r'payment_method')
  String? get paymentMethod;

  @BuiltValueField(wireName: r'phone')
  String? get phone;

  @BuiltValueField(wireName: r'pin')
  String? get pin;

  @BuiltValueField(wireName: r'state')
  String? get state;

  @BuiltValueField(wireName: r'status')
  String? get status;

  @BuiltValueField(wireName: r'zip')
  String? get zip;

  @BuiltValueField(wireName: r'account_id')
  String? get accountId;

  @BuiltValueField(wireName: r'account_lid')
  String? get accountLid;

  @BuiltValueField(wireName: r'address2')
  String? get address2;

  @BuiltValueField(wireName: r'affiliate_dock_description')
  String? get affiliateDockDescription;

  @BuiltValueField(wireName: r'affiliate_dock_title')
  String? get affiliateDockTitle;

  @BuiltValueField(wireName: r'affiliate_payment_method')
  String? get affiliatePaymentMethod;

  @BuiltValueField(wireName: r'affiliate_paypal')
  String? get affiliatePaypal;

  @BuiltValueField(wireName: r'cc')
  String? get cc;

  @BuiltValueField(wireName: r'cc_auto')
  String? get ccAuto;

  @BuiltValueField(wireName: r'cc_exp')
  String? get ccExp;

  @BuiltValueField(wireName: r'cc_type')
  String? get ccType;

  @BuiltValueField(wireName: r'cc_whitelist')
  String? get ccWhitelist;

  @BuiltValueField(wireName: r'ccs')
  AccountInfoDataCcs? get ccs;

  @BuiltValueField(wireName: r'ccs_added')
  String? get ccsAdded;

  @BuiltValueField(wireName: r'company')
  String? get company;

  @BuiltValueField(wireName: r'currency')
  String? get currency;

  @BuiltValueField(wireName: r'disable_reinstall')
  String? get disableReinstall;

  @BuiltValueField(wireName: r'disable_reset')
  String? get disableReset;

  @BuiltValueField(wireName: r'email')
  String? get email;

  @BuiltValueField(wireName: r'email_abuse')
  String? get emailAbuse;

  @BuiltValueField(wireName: r'email_settings')
  AccountInfoDataEmailSettings? get emailSettings;

  @BuiltValueField(wireName: r'extra')
  AccountInfoDataExtra? get extra;

  @BuiltValueField(wireName: r'facebook_id')
  String? get facebookId;

  @BuiltValueField(wireName: r'facebook_url')
  String? get facebookUrl;

  @BuiltValueField(wireName: r'firstname')
  String? get firstname;

  @BuiltValueField(wireName: r'fraudrecord')
  AccountInfoDataFraudrecord? get fraudrecord;

  @BuiltValueField(wireName: r'github_id')
  String? get githubId;

  @BuiltValueField(wireName: r'github_url')
  String? get githubUrl;

  @BuiltValueField(wireName: r'google_id')
  String? get googleId;

  @BuiltValueField(wireName: r'google_url')
  String? get googleUrl;

  @BuiltValueField(wireName: r'innertell_id')
  String? get innertellId;

  @BuiltValueField(wireName: r'lastname')
  String? get lastname;

  @BuiltValueField(wireName: r'locale')
  String? get locale;

  @BuiltValueField(wireName: r'maxmind')
  AccountInfoMaxMindResponse? get maxmind;

  @BuiltValueField(wireName: r'maxmind_score')
  String? get maxmindScore;

  @BuiltValueField(wireName: r'mb_id')
  String? get mbId;

  @BuiltValueField(wireName: r'modernbill_id')
  String? get modernbillId;

  @BuiltValueField(wireName: r'picture')
  String? get picture;

  @BuiltValueField(wireName: r'referrer_coupon')
  String? get referrerCoupon;

  @BuiltValueField(wireName: r'reseller_markup')
  String? get resellerMarkup;

  @BuiltValueField(wireName: r'username')
  String? get username;

  @BuiltValueField(wireName: r'ssh_key')
  String? get sshKey;

  @BuiltValueField(wireName: r'ssh_key_wrapped')
  String? get sshKeyWrapped;

  @BuiltValueField(wireName: r'api_key')
  String? get apiKey;

  @BuiltValueField(wireName: r'api_key_wrapped')
  String? get apiKeyWrapped;

  @BuiltValueField(wireName: r'2fa_google_key')
  String? get n2faGoogleKey;

  @BuiltValueField(wireName: r'2fa_google_enabled')
  bool? get n2faGoogleEnabled;

  @BuiltValueField(wireName: r'2fa_google')
  int? get n2faGoogle;

  @BuiltValueField(wireName: r'2fa_google_split')
  String? get n2faGoogleSplit;

  @BuiltValueField(wireName: r'2fa_google_qr')
  String? get n2faGoogleQr;

  AccountInfoData._();

  factory AccountInfoData([void updates(AccountInfoDataBuilder b)]) = _$AccountInfoData;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(AccountInfoDataBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<AccountInfoData> get serializer => _$AccountInfoDataSerializer();
}

class _$AccountInfoDataSerializer implements PrimitiveSerializer<AccountInfoData> {
  @override
  final Iterable<Type> types = const [AccountInfoData, _$AccountInfoData];

  @override
  final String wireName = r'AccountInfoData';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    AccountInfoData object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.group != null) {
      yield r'group';
      yield serializers.serialize(
        object.group,
        specifiedType: const FullType(String),
      );
    }
    if (object.address != null) {
      yield r'address';
      yield serializers.serialize(
        object.address,
        specifiedType: const FullType(String),
      );
    }
    if (object.city != null) {
      yield r'city';
      yield serializers.serialize(
        object.city,
        specifiedType: const FullType(String),
      );
    }
    if (object.country != null) {
      yield r'country';
      yield serializers.serialize(
        object.country,
        specifiedType: const FullType(String),
      );
    }
    if (object.disableCc != null) {
      yield r'disable_cc';
      yield serializers.serialize(
        object.disableCc,
        specifiedType: const FullType(String),
      );
    }
    if (object.fraudrecordScore != null) {
      yield r'fraudrecord_score';
      yield serializers.serialize(
        object.fraudrecordScore,
        specifiedType: const FullType(String),
      );
    }
    if (object.ima != null) {
      yield r'ima';
      yield serializers.serialize(
        object.ima,
        specifiedType: const FullType(String),
      );
    }
    if (object.name != null) {
      yield r'name';
      yield serializers.serialize(
        object.name,
        specifiedType: const FullType(String),
      );
    }
    if (object.paymentMethod != null) {
      yield r'payment_method';
      yield serializers.serialize(
        object.paymentMethod,
        specifiedType: const FullType(String),
      );
    }
    if (object.phone != null) {
      yield r'phone';
      yield serializers.serialize(
        object.phone,
        specifiedType: const FullType(String),
      );
    }
    if (object.pin != null) {
      yield r'pin';
      yield serializers.serialize(
        object.pin,
        specifiedType: const FullType(String),
      );
    }
    if (object.state != null) {
      yield r'state';
      yield serializers.serialize(
        object.state,
        specifiedType: const FullType(String),
      );
    }
    if (object.status != null) {
      yield r'status';
      yield serializers.serialize(
        object.status,
        specifiedType: const FullType(String),
      );
    }
    if (object.zip != null) {
      yield r'zip';
      yield serializers.serialize(
        object.zip,
        specifiedType: const FullType(String),
      );
    }
    if (object.accountId != null) {
      yield r'account_id';
      yield serializers.serialize(
        object.accountId,
        specifiedType: const FullType(String),
      );
    }
    if (object.accountLid != null) {
      yield r'account_lid';
      yield serializers.serialize(
        object.accountLid,
        specifiedType: const FullType(String),
      );
    }
    if (object.address2 != null) {
      yield r'address2';
      yield serializers.serialize(
        object.address2,
        specifiedType: const FullType(String),
      );
    }
    if (object.affiliateDockDescription != null) {
      yield r'affiliate_dock_description';
      yield serializers.serialize(
        object.affiliateDockDescription,
        specifiedType: const FullType(String),
      );
    }
    if (object.affiliateDockTitle != null) {
      yield r'affiliate_dock_title';
      yield serializers.serialize(
        object.affiliateDockTitle,
        specifiedType: const FullType(String),
      );
    }
    if (object.affiliatePaymentMethod != null) {
      yield r'affiliate_payment_method';
      yield serializers.serialize(
        object.affiliatePaymentMethod,
        specifiedType: const FullType(String),
      );
    }
    if (object.affiliatePaypal != null) {
      yield r'affiliate_paypal';
      yield serializers.serialize(
        object.affiliatePaypal,
        specifiedType: const FullType(String),
      );
    }
    if (object.cc != null) {
      yield r'cc';
      yield serializers.serialize(
        object.cc,
        specifiedType: const FullType(String),
      );
    }
    if (object.ccAuto != null) {
      yield r'cc_auto';
      yield serializers.serialize(
        object.ccAuto,
        specifiedType: const FullType(String),
      );
    }
    if (object.ccExp != null) {
      yield r'cc_exp';
      yield serializers.serialize(
        object.ccExp,
        specifiedType: const FullType(String),
      );
    }
    if (object.ccType != null) {
      yield r'cc_type';
      yield serializers.serialize(
        object.ccType,
        specifiedType: const FullType(String),
      );
    }
    if (object.ccWhitelist != null) {
      yield r'cc_whitelist';
      yield serializers.serialize(
        object.ccWhitelist,
        specifiedType: const FullType(String),
      );
    }
    if (object.ccs != null) {
      yield r'ccs';
      yield serializers.serialize(
        object.ccs,
        specifiedType: const FullType(AccountInfoDataCcs),
      );
    }
    if (object.ccsAdded != null) {
      yield r'ccs_added';
      yield serializers.serialize(
        object.ccsAdded,
        specifiedType: const FullType(String),
      );
    }
    if (object.company != null) {
      yield r'company';
      yield serializers.serialize(
        object.company,
        specifiedType: const FullType(String),
      );
    }
    if (object.currency != null) {
      yield r'currency';
      yield serializers.serialize(
        object.currency,
        specifiedType: const FullType(String),
      );
    }
    if (object.disableReinstall != null) {
      yield r'disable_reinstall';
      yield serializers.serialize(
        object.disableReinstall,
        specifiedType: const FullType(String),
      );
    }
    if (object.disableReset != null) {
      yield r'disable_reset';
      yield serializers.serialize(
        object.disableReset,
        specifiedType: const FullType(String),
      );
    }
    if (object.email != null) {
      yield r'email';
      yield serializers.serialize(
        object.email,
        specifiedType: const FullType(String),
      );
    }
    if (object.emailAbuse != null) {
      yield r'email_abuse';
      yield serializers.serialize(
        object.emailAbuse,
        specifiedType: const FullType(String),
      );
    }
    if (object.emailSettings != null) {
      yield r'email_settings';
      yield serializers.serialize(
        object.emailSettings,
        specifiedType: const FullType(AccountInfoDataEmailSettings),
      );
    }
    if (object.extra != null) {
      yield r'extra';
      yield serializers.serialize(
        object.extra,
        specifiedType: const FullType(AccountInfoDataExtra),
      );
    }
    if (object.facebookId != null) {
      yield r'facebook_id';
      yield serializers.serialize(
        object.facebookId,
        specifiedType: const FullType(String),
      );
    }
    if (object.facebookUrl != null) {
      yield r'facebook_url';
      yield serializers.serialize(
        object.facebookUrl,
        specifiedType: const FullType(String),
      );
    }
    if (object.firstname != null) {
      yield r'firstname';
      yield serializers.serialize(
        object.firstname,
        specifiedType: const FullType(String),
      );
    }
    if (object.fraudrecord != null) {
      yield r'fraudrecord';
      yield serializers.serialize(
        object.fraudrecord,
        specifiedType: const FullType(AccountInfoDataFraudrecord),
      );
    }
    if (object.githubId != null) {
      yield r'github_id';
      yield serializers.serialize(
        object.githubId,
        specifiedType: const FullType(String),
      );
    }
    if (object.githubUrl != null) {
      yield r'github_url';
      yield serializers.serialize(
        object.githubUrl,
        specifiedType: const FullType(String),
      );
    }
    if (object.googleId != null) {
      yield r'google_id';
      yield serializers.serialize(
        object.googleId,
        specifiedType: const FullType(String),
      );
    }
    if (object.googleUrl != null) {
      yield r'google_url';
      yield serializers.serialize(
        object.googleUrl,
        specifiedType: const FullType(String),
      );
    }
    if (object.innertellId != null) {
      yield r'innertell_id';
      yield serializers.serialize(
        object.innertellId,
        specifiedType: const FullType(String),
      );
    }
    if (object.lastname != null) {
      yield r'lastname';
      yield serializers.serialize(
        object.lastname,
        specifiedType: const FullType(String),
      );
    }
    if (object.locale != null) {
      yield r'locale';
      yield serializers.serialize(
        object.locale,
        specifiedType: const FullType(String),
      );
    }
    if (object.maxmind != null) {
      yield r'maxmind';
      yield serializers.serialize(
        object.maxmind,
        specifiedType: const FullType(AccountInfoMaxMindResponse),
      );
    }
    if (object.maxmindScore != null) {
      yield r'maxmind_score';
      yield serializers.serialize(
        object.maxmindScore,
        specifiedType: const FullType(String),
      );
    }
    if (object.mbId != null) {
      yield r'mb_id';
      yield serializers.serialize(
        object.mbId,
        specifiedType: const FullType(String),
      );
    }
    if (object.modernbillId != null) {
      yield r'modernbill_id';
      yield serializers.serialize(
        object.modernbillId,
        specifiedType: const FullType(String),
      );
    }
    if (object.picture != null) {
      yield r'picture';
      yield serializers.serialize(
        object.picture,
        specifiedType: const FullType(String),
      );
    }
    if (object.referrerCoupon != null) {
      yield r'referrer_coupon';
      yield serializers.serialize(
        object.referrerCoupon,
        specifiedType: const FullType(String),
      );
    }
    if (object.resellerMarkup != null) {
      yield r'reseller_markup';
      yield serializers.serialize(
        object.resellerMarkup,
        specifiedType: const FullType(String),
      );
    }
    if (object.username != null) {
      yield r'username';
      yield serializers.serialize(
        object.username,
        specifiedType: const FullType(String),
      );
    }
    if (object.sshKey != null) {
      yield r'ssh_key';
      yield serializers.serialize(
        object.sshKey,
        specifiedType: const FullType(String),
      );
    }
    if (object.sshKeyWrapped != null) {
      yield r'ssh_key_wrapped';
      yield serializers.serialize(
        object.sshKeyWrapped,
        specifiedType: const FullType(String),
      );
    }
    if (object.apiKey != null) {
      yield r'api_key';
      yield serializers.serialize(
        object.apiKey,
        specifiedType: const FullType(String),
      );
    }
    if (object.apiKeyWrapped != null) {
      yield r'api_key_wrapped';
      yield serializers.serialize(
        object.apiKeyWrapped,
        specifiedType: const FullType(String),
      );
    }
    if (object.n2faGoogleKey != null) {
      yield r'2fa_google_key';
      yield serializers.serialize(
        object.n2faGoogleKey,
        specifiedType: const FullType(String),
      );
    }
    if (object.n2faGoogleEnabled != null) {
      yield r'2fa_google_enabled';
      yield serializers.serialize(
        object.n2faGoogleEnabled,
        specifiedType: const FullType(bool),
      );
    }
    if (object.n2faGoogle != null) {
      yield r'2fa_google';
      yield serializers.serialize(
        object.n2faGoogle,
        specifiedType: const FullType(int),
      );
    }
    if (object.n2faGoogleSplit != null) {
      yield r'2fa_google_split';
      yield serializers.serialize(
        object.n2faGoogleSplit,
        specifiedType: const FullType(String),
      );
    }
    if (object.n2faGoogleQr != null) {
      yield r'2fa_google_qr';
      yield serializers.serialize(
        object.n2faGoogleQr,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    AccountInfoData object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required AccountInfoDataBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'group':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.group = valueDes;
          break;
        case r'address':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.address = valueDes;
          break;
        case r'city':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.city = valueDes;
          break;
        case r'country':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.country = valueDes;
          break;
        case r'disable_cc':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.disableCc = valueDes;
          break;
        case r'fraudrecord_score':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.fraudrecordScore = valueDes;
          break;
        case r'ima':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ima = valueDes;
          break;
        case r'name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.name = valueDes;
          break;
        case r'payment_method':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.paymentMethod = valueDes;
          break;
        case r'phone':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.phone = valueDes;
          break;
        case r'pin':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.pin = valueDes;
          break;
        case r'state':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.state = valueDes;
          break;
        case r'status':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.status = valueDes;
          break;
        case r'zip':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.zip = valueDes;
          break;
        case r'account_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.accountId = valueDes;
          break;
        case r'account_lid':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.accountLid = valueDes;
          break;
        case r'address2':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.address2 = valueDes;
          break;
        case r'affiliate_dock_description':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.affiliateDockDescription = valueDes;
          break;
        case r'affiliate_dock_title':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.affiliateDockTitle = valueDes;
          break;
        case r'affiliate_payment_method':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.affiliatePaymentMethod = valueDes;
          break;
        case r'affiliate_paypal':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.affiliatePaypal = valueDes;
          break;
        case r'cc':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.cc = valueDes;
          break;
        case r'cc_auto':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ccAuto = valueDes;
          break;
        case r'cc_exp':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ccExp = valueDes;
          break;
        case r'cc_type':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ccType = valueDes;
          break;
        case r'cc_whitelist':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ccWhitelist = valueDes;
          break;
        case r'ccs':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(AccountInfoDataCcs),
          ) as AccountInfoDataCcs;
          result.ccs = valueDes;
          break;
        case r'ccs_added':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ccsAdded = valueDes;
          break;
        case r'company':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.company = valueDes;
          break;
        case r'currency':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.currency = valueDes;
          break;
        case r'disable_reinstall':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.disableReinstall = valueDes;
          break;
        case r'disable_reset':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.disableReset = valueDes;
          break;
        case r'email':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.email = valueDes;
          break;
        case r'email_abuse':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.emailAbuse = valueDes;
          break;
        case r'email_settings':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(AccountInfoDataEmailSettings),
          ) as AccountInfoDataEmailSettings;
          result.emailSettings.replace(valueDes);
          break;
        case r'extra':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(AccountInfoDataExtra),
          ) as AccountInfoDataExtra;
          result.extra.replace(valueDes);
          break;
        case r'facebook_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.facebookId = valueDes;
          break;
        case r'facebook_url':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.facebookUrl = valueDes;
          break;
        case r'firstname':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.firstname = valueDes;
          break;
        case r'fraudrecord':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(AccountInfoDataFraudrecord),
          ) as AccountInfoDataFraudrecord;
          result.fraudrecord.replace(valueDes);
          break;
        case r'github_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.githubId = valueDes;
          break;
        case r'github_url':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.githubUrl = valueDes;
          break;
        case r'google_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.googleId = valueDes;
          break;
        case r'google_url':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.googleUrl = valueDes;
          break;
        case r'innertell_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.innertellId = valueDes;
          break;
        case r'lastname':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.lastname = valueDes;
          break;
        case r'locale':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.locale = valueDes;
          break;
        case r'maxmind':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(AccountInfoMaxMindResponse),
          ) as AccountInfoMaxMindResponse;
          result.maxmind.replace(valueDes);
          break;
        case r'maxmind_score':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.maxmindScore = valueDes;
          break;
        case r'mb_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.mbId = valueDes;
          break;
        case r'modernbill_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.modernbillId = valueDes;
          break;
        case r'picture':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.picture = valueDes;
          break;
        case r'referrer_coupon':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.referrerCoupon = valueDes;
          break;
        case r'reseller_markup':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.resellerMarkup = valueDes;
          break;
        case r'username':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.username = valueDes;
          break;
        case r'ssh_key':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.sshKey = valueDes;
          break;
        case r'ssh_key_wrapped':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.sshKeyWrapped = valueDes;
          break;
        case r'api_key':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.apiKey = valueDes;
          break;
        case r'api_key_wrapped':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.apiKeyWrapped = valueDes;
          break;
        case r'2fa_google_key':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.n2faGoogleKey = valueDes;
          break;
        case r'2fa_google_enabled':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.n2faGoogleEnabled = valueDes;
          break;
        case r'2fa_google':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.n2faGoogle = valueDes;
          break;
        case r'2fa_google_split':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.n2faGoogleSplit = valueDes;
          break;
        case r'2fa_google_qr':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.n2faGoogleQr = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  AccountInfoData deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = AccountInfoDataBuilder();
    final serializedList = (serialized as Iterable<Object?>).toList();
    final unhandled = <Object?>[];
    _deserializeProperties(
      serializers,
      serialized,
      specifiedType: specifiedType,
      serializedList: serializedList,
      unhandled: unhandled,
      result: result,
    );
    return result.build();
  }
}

