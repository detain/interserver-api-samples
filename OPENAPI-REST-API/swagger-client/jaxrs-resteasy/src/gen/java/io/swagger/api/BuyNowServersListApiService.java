package io.swagger.api;

import io.swagger.api.*;
import io.swagger.model.*;

import io.swagger.model.BuyItNowList;
import io.swagger.model.InlineResponse401;

import java.util.List;
import java.util.Map;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import javax.ws.rs.core.Response;
import javax.ws.rs.core.SecurityContext;


public interface BuyNowServersListApiService {
      Response getMPServers(SecurityContext securityContext) throws NotFoundException;
}
