package io.swagger.api;

import io.swagger.model.*;
import io.swagger.api.CaptchaApiService;

import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.Parameter;
import io.swagger.v3.oas.annotations.responses.ApiResponses;
import io.swagger.v3.oas.annotations.responses.ApiResponse;
import io.swagger.v3.oas.annotations.media.ArraySchema;
import io.swagger.v3.oas.annotations.media.Content;
import io.swagger.v3.oas.annotations.media.Schema;
import io.swagger.v3.oas.annotations.security.SecurityRequirement;

import io.swagger.model.CaptchaResponse;
import io.swagger.model.InlineResponse401;

import java.util.Map;
import java.util.List;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import javax.ws.rs.core.Context;
import javax.ws.rs.core.Response;
import javax.ws.rs.core.SecurityContext;
import javax.ws.rs.*;
import javax.inject.Inject;

import javax.validation.constraints.*;
@Path("/captcha")



public class CaptchaApi  {

    @Inject CaptchaApiService service;

    @GET
    
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Captcha Challenge", description = "Returns a base64-encoded JPEG captcha image for human verification. Display this image to the user and submit their response along with the registration or order form. No authentication is required for this endpoint.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "Public" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "An array containing a `captcha` field containing a string with a base64 encoded captcha image.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = CaptchaResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getCaptcha(@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.getCaptcha(securityContext);
    }
}
