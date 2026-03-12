package io.swagger.api;

import io.swagger.api.*;
import io.swagger.model.*;

import io.swagger.model.InlineResponse2009;
import io.swagger.model.InlineResponse401;

import java.util.List;
import java.util.Map;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import javax.ws.rs.core.Response;
import javax.ws.rs.core.SecurityContext;


public interface PayApiService {
      Response initiatePayment(String method,String invoices,SecurityContext securityContext) throws NotFoundException;
}
