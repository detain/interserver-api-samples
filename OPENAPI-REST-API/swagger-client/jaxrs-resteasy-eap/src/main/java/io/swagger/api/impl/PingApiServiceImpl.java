package io.swagger.api.impl;

import io.swagger.api.*;
import io.swagger.model.*;

import io.swagger.model.InlineResponse401;

import java.util.List;
import java.util.Map;

import java.io.InputStream;

import javax.ws.rs.core.Response;
import javax.ws.rs.core.SecurityContext;


public class PingApiServiceImpl implements PingApi {
      public Response pingServer(SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
}
