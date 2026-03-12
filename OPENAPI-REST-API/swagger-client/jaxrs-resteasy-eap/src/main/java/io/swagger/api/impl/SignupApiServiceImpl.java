package io.swagger.api.impl;

import io.swagger.api.*;
import io.swagger.model.*;

import io.swagger.model.LoginErrorResponse;
import io.swagger.model.LoginSubmissionExample;

import java.util.List;
import java.util.Map;

import java.io.InputStream;

import javax.ws.rs.core.Response;
import javax.ws.rs.core.SecurityContext;


public class SignupApiServiceImpl implements SignupApi {
      public Response submitSignup(LoginSubmissionExample body,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
}
