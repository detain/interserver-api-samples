//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/tickets_row.dart';
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/tickets_count_array.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'tickets.g.dart';

/// A listing of support tickets.
///
/// Properties:
/// * [ima] 
/// * [custid] 
/// * [view] 
/// * [currentPage] 
/// * [limit] 
/// * [sortcol] 
/// * [sortdir] 
/// * [rowsOffset] 
/// * [tickets] 
/// * [pages] 
/// * [rowsTotal] 
/// * [inboxCount] 
/// * [countArray] 
/// * [viewText] 
@BuiltValue()
abstract class Tickets implements Built<Tickets, TicketsBuilder> {
  @BuiltValueField(wireName: r'ima')
  String get ima;

  @BuiltValueField(wireName: r'custid')
  String get custid;

  @BuiltValueField(wireName: r'view')
  String get view;

  @BuiltValueField(wireName: r'currentPage')
  int get currentPage;

  @BuiltValueField(wireName: r'limit')
  int get limit;

  @BuiltValueField(wireName: r'sortcol')
  int get sortcol;

  @BuiltValueField(wireName: r'sortdir')
  int get sortdir;

  @BuiltValueField(wireName: r'rowsOffset')
  int get rowsOffset;

  @BuiltValueField(wireName: r'tickets')
  BuiltList<TicketsRow> get tickets;

  @BuiltValueField(wireName: r'pages')
  int get pages;

  @BuiltValueField(wireName: r'rowsTotal')
  int get rowsTotal;

  @BuiltValueField(wireName: r'inboxCount')
  int get inboxCount;

  @BuiltValueField(wireName: r'countArray')
  TicketsCountArray get countArray;

  @BuiltValueField(wireName: r'viewText')
  String get viewText;

  Tickets._();

  factory Tickets([void updates(TicketsBuilder b)]) = _$Tickets;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(TicketsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<Tickets> get serializer => _$TicketsSerializer();
}

class _$TicketsSerializer implements PrimitiveSerializer<Tickets> {
  @override
  final Iterable<Type> types = const [Tickets, _$Tickets];

  @override
  final String wireName = r'Tickets';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    Tickets object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'ima';
    yield serializers.serialize(
      object.ima,
      specifiedType: const FullType(String),
    );
    yield r'custid';
    yield serializers.serialize(
      object.custid,
      specifiedType: const FullType(String),
    );
    yield r'view';
    yield serializers.serialize(
      object.view,
      specifiedType: const FullType(String),
    );
    yield r'currentPage';
    yield serializers.serialize(
      object.currentPage,
      specifiedType: const FullType(int),
    );
    yield r'limit';
    yield serializers.serialize(
      object.limit,
      specifiedType: const FullType(int),
    );
    yield r'sortcol';
    yield serializers.serialize(
      object.sortcol,
      specifiedType: const FullType(int),
    );
    yield r'sortdir';
    yield serializers.serialize(
      object.sortdir,
      specifiedType: const FullType(int),
    );
    yield r'rowsOffset';
    yield serializers.serialize(
      object.rowsOffset,
      specifiedType: const FullType(int),
    );
    yield r'tickets';
    yield serializers.serialize(
      object.tickets,
      specifiedType: const FullType(BuiltList, [FullType(TicketsRow)]),
    );
    yield r'pages';
    yield serializers.serialize(
      object.pages,
      specifiedType: const FullType(int),
    );
    yield r'rowsTotal';
    yield serializers.serialize(
      object.rowsTotal,
      specifiedType: const FullType(int),
    );
    yield r'inboxCount';
    yield serializers.serialize(
      object.inboxCount,
      specifiedType: const FullType(int),
    );
    yield r'countArray';
    yield serializers.serialize(
      object.countArray,
      specifiedType: const FullType(TicketsCountArray),
    );
    yield r'viewText';
    yield serializers.serialize(
      object.viewText,
      specifiedType: const FullType(String),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    Tickets object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required TicketsBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'ima':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ima = valueDes;
          break;
        case r'custid':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.custid = valueDes;
          break;
        case r'view':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.view = valueDes;
          break;
        case r'currentPage':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.currentPage = valueDes;
          break;
        case r'limit':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.limit = valueDes;
          break;
        case r'sortcol':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.sortcol = valueDes;
          break;
        case r'sortdir':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.sortdir = valueDes;
          break;
        case r'rowsOffset':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.rowsOffset = valueDes;
          break;
        case r'tickets':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(TicketsRow)]),
          ) as BuiltList<TicketsRow>;
          result.tickets.replace(valueDes);
          break;
        case r'pages':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.pages = valueDes;
          break;
        case r'rowsTotal':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.rowsTotal = valueDes;
          break;
        case r'inboxCount':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.inboxCount = valueDes;
          break;
        case r'countArray':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(TicketsCountArray),
          ) as TicketsCountArray;
          result.countArray.replace(valueDes);
          break;
        case r'viewText':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.viewText = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  Tickets deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = TicketsBuilder();
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

