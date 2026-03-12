//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/home_ticket_status.dart';
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/home_services.dart';
import 'package:openapi/src/model/home_ticket_status_view.dart';
import 'package:openapi/src/model/home_details.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'home.g.dart';

/// Home
///
/// Properties:
/// * [lastLoginIp] - Last login IP.
/// * [lastLogin] - Last login time.
/// * [currency] - Currency symbol.
/// * [amount] - Amount with currency.
/// * [invoiceList] - Number of invoices.
/// * [balance] - Balance with currency.
/// * [fullName] - Users full name.
/// * [email] - User email address.
/// * [tickets] - List of tickets.
/// * [ticketStatus] 
/// * [ticketStatusView] 
/// * [details] 
/// * [services] 
/// * [AFFILIATE_AMOUNT] - Affiliate amount with currency.
@BuiltValue()
abstract class Home implements Built<Home, HomeBuilder> {
  /// Last login IP.
  @BuiltValueField(wireName: r'last_login_ip')
  String get lastLoginIp;

  /// Last login time.
  @BuiltValueField(wireName: r'last_login')
  String get lastLogin;

  /// Currency symbol.
  @BuiltValueField(wireName: r'currency')
  String get currency;

  /// Amount with currency.
  @BuiltValueField(wireName: r'amount')
  String get amount;

  /// Number of invoices.
  @BuiltValueField(wireName: r'invoice_list')
  int get invoiceList;

  /// Balance with currency.
  @BuiltValueField(wireName: r'balance')
  String get balance;

  /// Users full name.
  @BuiltValueField(wireName: r'full_name')
  String get fullName;

  /// User email address.
  @BuiltValueField(wireName: r'email')
  String get email;

  /// List of tickets.
  @BuiltValueField(wireName: r'tickets')
  BuiltList<String> get tickets;

  @BuiltValueField(wireName: r'ticketStatus')
  HomeTicketStatus get ticketStatus;

  @BuiltValueField(wireName: r'ticketStatusView')
  HomeTicketStatusView get ticketStatusView;

  @BuiltValueField(wireName: r'details')
  HomeDetails get details;

  @BuiltValueField(wireName: r'services')
  HomeServices get services;

  /// Affiliate amount with currency.
  @BuiltValueField(wireName: r'AFFILIATE_AMOUNT')
  String get AFFILIATE_AMOUNT;

  Home._();

  factory Home([void updates(HomeBuilder b)]) = _$Home;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(HomeBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<Home> get serializer => _$HomeSerializer();
}

class _$HomeSerializer implements PrimitiveSerializer<Home> {
  @override
  final Iterable<Type> types = const [Home, _$Home];

  @override
  final String wireName = r'Home';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    Home object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'last_login_ip';
    yield serializers.serialize(
      object.lastLoginIp,
      specifiedType: const FullType(String),
    );
    yield r'last_login';
    yield serializers.serialize(
      object.lastLogin,
      specifiedType: const FullType(String),
    );
    yield r'currency';
    yield serializers.serialize(
      object.currency,
      specifiedType: const FullType(String),
    );
    yield r'amount';
    yield serializers.serialize(
      object.amount,
      specifiedType: const FullType(String),
    );
    yield r'invoice_list';
    yield serializers.serialize(
      object.invoiceList,
      specifiedType: const FullType(int),
    );
    yield r'balance';
    yield serializers.serialize(
      object.balance,
      specifiedType: const FullType(String),
    );
    yield r'full_name';
    yield serializers.serialize(
      object.fullName,
      specifiedType: const FullType(String),
    );
    yield r'email';
    yield serializers.serialize(
      object.email,
      specifiedType: const FullType(String),
    );
    yield r'tickets';
    yield serializers.serialize(
      object.tickets,
      specifiedType: const FullType(BuiltList, [FullType(String)]),
    );
    yield r'ticketStatus';
    yield serializers.serialize(
      object.ticketStatus,
      specifiedType: const FullType(HomeTicketStatus),
    );
    yield r'ticketStatusView';
    yield serializers.serialize(
      object.ticketStatusView,
      specifiedType: const FullType(HomeTicketStatusView),
    );
    yield r'details';
    yield serializers.serialize(
      object.details,
      specifiedType: const FullType(HomeDetails),
    );
    yield r'services';
    yield serializers.serialize(
      object.services,
      specifiedType: const FullType(HomeServices),
    );
    yield r'AFFILIATE_AMOUNT';
    yield serializers.serialize(
      object.AFFILIATE_AMOUNT,
      specifiedType: const FullType(String),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    Home object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required HomeBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'last_login_ip':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.lastLoginIp = valueDes;
          break;
        case r'last_login':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.lastLogin = valueDes;
          break;
        case r'currency':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.currency = valueDes;
          break;
        case r'amount':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.amount = valueDes;
          break;
        case r'invoice_list':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.invoiceList = valueDes;
          break;
        case r'balance':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.balance = valueDes;
          break;
        case r'full_name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.fullName = valueDes;
          break;
        case r'email':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.email = valueDes;
          break;
        case r'tickets':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(String)]),
          ) as BuiltList<String>;
          result.tickets.replace(valueDes);
          break;
        case r'ticketStatus':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(HomeTicketStatus),
          ) as HomeTicketStatus;
          result.ticketStatus.replace(valueDes);
          break;
        case r'ticketStatusView':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(HomeTicketStatusView),
          ) as HomeTicketStatusView;
          result.ticketStatusView.replace(valueDes);
          break;
        case r'details':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(HomeDetails),
          ) as HomeDetails;
          result.details.replace(valueDes);
          break;
        case r'services':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(HomeServices),
          ) as HomeServices;
          result.services.replace(valueDes);
          break;
        case r'AFFILIATE_AMOUNT':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.AFFILIATE_AMOUNT = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  Home deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = HomeBuilder();
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

