package io.swagger.api;

import io.swagger.api.*;
import io.swagger.model.*;

import org.glassfish.jersey.media.multipart.FormDataContentDisposition;

import io.swagger.model.LoginErrorResponse;
import io.swagger.model.LoginInfo;
import io.swagger.model.LoginSubmissionExample;
import io.swagger.model.LoginSubmissionExampleGrecaptcharesponse;
import io.swagger.model.LoginSuccessResponse;

import java.util.Map;
import java.util.List;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import javax.ws.rs.core.Response;
import javax.ws.rs.core.SecurityContext;
import javax.validation.constraints.*;

public abstract class LoginApiService {
    public abstract Response getLoginInfo(SecurityContext securityContext) throws NotFoundException;
    public abstract Response submitLogin(String login,String passwd,String remember,LoginSubmissionExampleGrecaptcharesponse gRecaptchaResponse,String tfa,SecurityContext securityContext) throws NotFoundException;
    public abstract Response submitLogin(LoginSubmissionExample body,SecurityContext securityContext) throws NotFoundException;
}
