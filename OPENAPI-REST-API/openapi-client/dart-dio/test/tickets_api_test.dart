import 'package:test/test.dart';
import 'package:openapi/openapi.dart';


/// tests for TicketsApi
void main() {
  final instance = Openapi().getTicketsApi();

  group(TicketsApi, () {
    // Create New Ticket
    //
    // Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.
    //
    //Future<TicketNewResponse> addNewTicket(TicketNew ticketNew) async
    test('test addNewTicket', () async {
      // TODO
    });

    // Close Ticket
    //
    // Closes the specified support ticket. Closed tickets can still be viewed but will no longer appear in the active inbox.
    //
    //Future<CloseTicketResponseSchema> closeTicket(String id) async
    test('test closeTicket', () async {
      // TODO
    });

    // Close Ticket
    //
    // Closes the support ticket.
    //
    //Future<ViewTicketResponse> deleteTicketInfo(num id) async
    test('test deleteTicketInfo', () async {
      // TODO
    });

    // Gets Information for creating a new ticket.
    //
    // Returns the form data needed to create a new support ticket, such as available departments and service categories.
    //
    //Future getNewTicket() async
    test('test getNewTicket', () async {
      // TODO
    });

    // Get Ticket Information
    //
    // Returns the full details of a support ticket including its history of replies.
    //
    //Future<ViewTicketResponse> getTicketInfo(num id) async
    test('test getTicketInfo', () async {
      // TODO
    });

    // List Support Tickets
    //
    // Returns a paginated list of support tickets on the account. Filter by status and time period.
    //
    //Future<Tickets> getTicketsList({ int page, String period, String view }) async
    test('test getTicketsList', () async {
      // TODO
    });

    // Reply To Ticket
    //
    // Adds a reply to an existing support ticket.
    //
    //Future<ViewTicketResponse> postTicketInfo(num id) async
    test('test postTicketInfo', () async {
      // TODO
    });

    // Search Support Tickets
    //
    // Searches support tickets by email, subject, or ticket mask ID.
    //
    //Future<Tickets> postTicketsList() async
    test('test postTicketsList', () async {
      // TODO
    });

    // Update Ticket
    //
    // Updates a support ticket's properties such as subject or status.
    //
    //Future<ViewTicketResponse> putTicketInfo(num id) async
    test('test putTicketInfo', () async {
      // TODO
    });

    // Reply Ticket
    //
    // Posts a reply to an existing support ticket thread.
    //
    //Future<ReplyTicketResponseSchema> replyTicket(num id, { ReplyTicketRequest replyTicketRequest }) async
    test('test replyTicket', () async {
      // TODO
    });

    // Update Ticket
    //
    // Updates a support ticket's subject or body content.
    //
    //Future<UpdateTicketResponseSchema> updateTicketInfo(num id, { UpdateTicket updateTicket }) async
    test('test updateTicketInfo', () async {
      // TODO
    });

  });
}
