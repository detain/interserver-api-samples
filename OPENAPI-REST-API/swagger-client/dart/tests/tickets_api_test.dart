import 'package:swagger/api.dart';
import 'package:test/test.dart';


/// tests for TicketsApi
void main() {
  var instance = new TicketsApi();

  group('tests for TicketsApi', () {
    // Create New Ticket
    //
    // Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.
    //
    //Future<TicketNewResponse> addNewTicket(TicketNew body, String subject, String body, int serviceId, String serviceModule) async
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
    //Future<ViewTicketResponse> deleteTicketInfo(double id) async
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
    //Future<ViewTicketResponse> getTicketInfo(double id) async
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
    //Future<ViewTicketResponse> postTicketInfo(double id) async
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
    //Future<ViewTicketResponse> putTicketInfo(double id) async
    test('test putTicketInfo', () async {
      // TODO
    });

    // Reply Ticket
    //
    // Posts a reply to an existing support ticket thread.
    //
    //Future<ReplyTicketResponseSchema> replyTicket(double id, { ReplyTicketRequest body, String content }) async
    test('test replyTicket', () async {
      // TODO
    });

    // Update Ticket
    //
    // Updates a support ticket's subject or body content.
    //
    //Future<UpdateTicketResponseSchema> updateTicketInfo(double id, { UpdateTicket body, String ip, String ipAddress, String customerServerAccess, String rootPassword, String sudoUsername, String sudoPassword, int port }) async
    test('test updateTicketInfo', () async {
      // TODO
    });

  });
}
