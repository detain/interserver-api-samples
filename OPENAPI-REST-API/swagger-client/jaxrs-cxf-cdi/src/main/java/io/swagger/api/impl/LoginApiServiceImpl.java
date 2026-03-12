package io.swagger.api.impl;

import io.swagger.api.*;
import io.swagger.model.*;

import org.apache.cxf.jaxrs.ext.multipart.Attachment;

import io.swagger.model.LoginErrorResponse;
import io.swagger.model.LoginInfo;
import io.swagger.model.LoginSubmissionExample;
import io.swagger.model.LoginSubmissionExampleGrecaptcharesponse;
import io.swagger.model.LoginSuccessResponse;

import java.util.List;

import java.io.InputStream;

import javax.enterprise.context.RequestScoped;
import javax.ws.rs.core.Response;
import javax.ws.rs.core.SecurityContext;

@RequestScoped

public class LoginApiServiceImpl implements LoginApiService {
      @Override
      public Response getLoginInfo(SecurityContext securityContext) {
      // do some magic!
      return Response.ok().entity("magic!").build();
  }
      @Override
      public Response submitLogin(String login, String passwd, String remember, LoginSubmissionExampleGrecaptcharesponse gRecaptchaResponse, String tfa, SecurityContext securityContext) {
      // do some magic!
      return Response.ok().entity("magic!").build();
  }
      @Override
      public Response submitLogin(LoginSubmissionExample body, SecurityContext securityContext) {
      // do some magic!
      return Response.ok().entity("magic!").build();
  }
}
