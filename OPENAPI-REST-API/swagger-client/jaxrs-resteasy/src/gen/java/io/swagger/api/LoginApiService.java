package io.swagger.api;

import io.swagger.api.*;
import io.swagger.model.*;
import org.jboss.resteasy.plugins.providers.multipart.MultipartFormDataInput;

import io.swagger.model.LoginErrorResponse;
import io.swagger.model.LoginInfo;
import io.swagger.model.LoginSubmissionExample;
import io.swagger.model.LoginSubmissionExampleGrecaptcharesponse;
import io.swagger.model.LoginSuccessResponse;

import java.util.List;
import java.util.Map;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import javax.ws.rs.core.Response;
import javax.ws.rs.core.SecurityContext;


public interface LoginApiService {
      Response getLoginInfo(SecurityContext securityContext) throws NotFoundException;
      Response submitLogin(MultipartFormDataInput input,String login,String passwd,String remember,LoginSubmissionExampleGrecaptcharesponse gRecaptchaResponse,String tfa,SecurityContext securityContext) throws NotFoundException;
      Response submitLogin(MultipartFormDataInput input,LoginSubmissionExample body,SecurityContext securityContext) throws NotFoundException;
}
