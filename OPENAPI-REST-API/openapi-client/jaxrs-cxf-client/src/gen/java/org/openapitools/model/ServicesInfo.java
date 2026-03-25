package org.openapitools.model;

import org.openapitools.model.Modules;
import org.openapitools.model.ServiceCategories;
import org.openapitools.model.ServiceTypes;
import org.openapitools.model.Services;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Contains the complete catalog of available modules, services, service types, and service categories.
 */
@ApiModel(description="Contains the complete catalog of available modules, services, service types, and service categories.")

public class ServicesInfo  {
  
  @ApiModelProperty(required = true, value = "")

  private Modules modules = new HashMap<>();

  @ApiModelProperty(required = true, value = "")

  private Services services = new HashMap<>();

  @ApiModelProperty(required = true, value = "")

  private ServiceTypes serviceTypes = new HashMap<>();

  @ApiModelProperty(required = true, value = "")

  private ServiceCategories serviceCategories = new HashMap<>();
 /**
   * Get modules
   * @return modules
  **/
  @JsonProperty("modules")
  public Modules getModules() {
    return modules;
  }

  public void setModules(Modules modules) {
    this.modules = modules;
  }

  public ServicesInfo modules(Modules modules) {
    this.modules = modules;
    return this;
  }

 /**
   * Get services
   * @return services
  **/
  @JsonProperty("services")
  public Services getServices() {
    return services;
  }

  public void setServices(Services services) {
    this.services = services;
  }

  public ServicesInfo services(Services services) {
    this.services = services;
    return this;
  }

 /**
   * Get serviceTypes
   * @return serviceTypes
  **/
  @JsonProperty("serviceTypes")
  public ServiceTypes getServiceTypes() {
    return serviceTypes;
  }

  public void setServiceTypes(ServiceTypes serviceTypes) {
    this.serviceTypes = serviceTypes;
  }

  public ServicesInfo serviceTypes(ServiceTypes serviceTypes) {
    this.serviceTypes = serviceTypes;
    return this;
  }

 /**
   * Get serviceCategories
   * @return serviceCategories
  **/
  @JsonProperty("serviceCategories")
  public ServiceCategories getServiceCategories() {
    return serviceCategories;
  }

  public void setServiceCategories(ServiceCategories serviceCategories) {
    this.serviceCategories = serviceCategories;
  }

  public ServicesInfo serviceCategories(ServiceCategories serviceCategories) {
    this.serviceCategories = serviceCategories;
    return this;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ServicesInfo servicesInfo = (ServicesInfo) o;
    return Objects.equals(this.modules, servicesInfo.modules) &&
        Objects.equals(this.services, servicesInfo.services) &&
        Objects.equals(this.serviceTypes, servicesInfo.serviceTypes) &&
        Objects.equals(this.serviceCategories, servicesInfo.serviceCategories);
  }

  @Override
  public int hashCode() {
    return Objects.hash(modules, services, serviceTypes, serviceCategories);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServicesInfo {\n");
    
    sb.append("    modules: ").append(toIndentedString(modules)).append("\n");
    sb.append("    services: ").append(toIndentedString(services)).append("\n");
    sb.append("    serviceTypes: ").append(toIndentedString(serviceTypes)).append("\n");
    sb.append("    serviceCategories: ").append(toIndentedString(serviceCategories)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

