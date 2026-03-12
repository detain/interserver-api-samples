package io.swagger.api;

import java.math.BigDecimal;

import io.swagger.model.CloseTicketResponseSchema;

import io.swagger.model.InlineResponse401;

import io.swagger.model.ReplyTicketRequest;

import io.swagger.model.ReplyTicketResponseSchema;

import io.swagger.model.TicketNew;

import io.swagger.model.TicketNewResponse;

import io.swagger.model.Tickets;

import io.swagger.model.UpdateTicket;

import io.swagger.model.UpdateTicketResponseSchema;

import io.swagger.model.ViewTicketResponse;

import io.micronaut.http.annotation.Controller;
import io.micronaut.http.HttpResponse;
import io.reactivex.rxjava3.core.Single;

import javax.annotation.Nullable;
import javax.validation.Valid;
import javax.validation.constraints.*;
import java.util.List;
import java.util.Map;

@Controller
public class TicketsApiController implements TicketsApi {

    @Override
    public Single<HttpResponse<TicketNewResponse>> addNewTicket(@NotNull @Valid TicketNew body) {
        // TODO: Implement me
        return TicketsApi.super.addNewTicket(body);
    }

    @Override
    public Single<HttpResponse<TicketNewResponse>> addNewTicket(@NotNull String subject, @NotNull String body, @NotNull Integer serviceId, @NotNull String serviceModule) {
        // TODO: Implement me
        return TicketsApi.super.addNewTicket(subject, body, serviceId, serviceModule);
    }

    @Override
    public Single<HttpResponse<CloseTicketResponseSchema>> closeTicket(String id) {
        // TODO: Implement me
        return TicketsApi.super.closeTicket(id);
    }

    @Override
    public Single<HttpResponse<ViewTicketResponse>> deleteTicketInfo(BigDecimal id) {
        // TODO: Implement me
        return TicketsApi.super.deleteTicketInfo(id);
    }

    @Override
    public Single<HttpResponse<Void>> getNewTicket() {
        // TODO: Implement me
        return TicketsApi.super.getNewTicket();
    }

    @Override
    public Single<HttpResponse<ViewTicketResponse>> getTicketInfo(BigDecimal id) {
        // TODO: Implement me
        return TicketsApi.super.getTicketInfo(id);
    }

    @Override
    public Single<HttpResponse<Tickets>> getTicketsList(@Nullable Integer page, @Nullable String period, @Nullable String view) {
        // TODO: Implement me
        return TicketsApi.super.getTicketsList(page, period, view);
    }

    @Override
    public Single<HttpResponse<ViewTicketResponse>> postTicketInfo(BigDecimal id) {
        // TODO: Implement me
        return TicketsApi.super.postTicketInfo(id);
    }

    @Override
    public Single<HttpResponse<Tickets>> postTicketsList() {
        // TODO: Implement me
        return TicketsApi.super.postTicketsList();
    }

    @Override
    public Single<HttpResponse<ViewTicketResponse>> putTicketInfo(BigDecimal id) {
        // TODO: Implement me
        return TicketsApi.super.putTicketInfo(id);
    }

    @Override
    public Single<HttpResponse<ReplyTicketResponseSchema>> replyTicket(BigDecimal id, @Nullable @Valid ReplyTicketRequest body) {
        // TODO: Implement me
        return TicketsApi.super.replyTicket(id, body);
    }

    @Override
    public Single<HttpResponse<ReplyTicketResponseSchema>> replyTicket(BigDecimal id, @Nullable String content) {
        // TODO: Implement me
        return TicketsApi.super.replyTicket(id, content);
    }

    @Override
    public Single<HttpResponse<UpdateTicketResponseSchema>> updateTicketInfo(BigDecimal id, @Nullable @Valid UpdateTicket body) {
        // TODO: Implement me
        return TicketsApi.super.updateTicketInfo(id, body);
    }

    @Override
    public Single<HttpResponse<UpdateTicketResponseSchema>> updateTicketInfo(BigDecimal id, @Nullable String ip, @Nullable String ipAddress, @Nullable String customerServerAccess, @Nullable String rootPassword, @Nullable String sudoUsername, @Nullable String sudoPassword, @Nullable Integer port) {
        // TODO: Implement me
        return TicketsApi.super.updateTicketInfo(id, ip, ipAddress, customerServerAccess, rootPassword, sudoUsername, sudoPassword, port);
    }
}
