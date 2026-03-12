package io.swagger.api;

import io.swagger.api.*;
import io.swagger.model.*;

import io.swagger.model.LoginErrorResponse;
import io.swagger.model.LoginSubmissionExample;

import java.util.List;
import java.util.Map;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import javax.ws.rs.core.Response;
import javax.ws.rs.core.SecurityContext;


public interface SignupApiService {
      Response submitSignup(LoginSubmissionExample body,SecurityContext securityContext) throws NotFoundException;
}
