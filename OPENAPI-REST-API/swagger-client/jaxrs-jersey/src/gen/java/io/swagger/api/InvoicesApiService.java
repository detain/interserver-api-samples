package io.swagger.api;

import io.swagger.api.*;
import io.swagger.model.*;

import org.glassfish.jersey.media.multipart.FormDataContentDisposition;

import io.swagger.model.InlineResponse401;
import io.swagger.model.Invoice;

import java.util.Map;
import java.util.List;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import javax.ws.rs.core.Response;
import javax.ws.rs.core.SecurityContext;
import javax.validation.constraints.*;

public abstract class InvoicesApiService {
    public abstract Response getInvoices( String searchString, @Min(0) Integer skip, @Min(0) @Max(50) Integer limit,SecurityContext securityContext) throws NotFoundException;
}
