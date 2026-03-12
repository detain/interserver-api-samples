package io.swagger.api.impl;

import io.swagger.api.*;
import io.swagger.model.*;

import io.swagger.model.BuyItNowList;
import io.swagger.model.InlineResponse401;

import java.util.List;
import java.util.Map;

import java.io.InputStream;

import javax.ws.rs.core.Response;
import javax.ws.rs.core.SecurityContext;


public class BuyNowServersListApiServiceImpl implements BuyNowServersListApi {
      public Response getMPServers(SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
}
