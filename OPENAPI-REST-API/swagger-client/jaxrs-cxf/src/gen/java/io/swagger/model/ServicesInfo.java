package io.swagger.model;

import io.swagger.model.Modules;
import io.swagger.model.ServiceCategories;
import io.swagger.model.ServiceTypes;
import io.swagger.model.Services;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonCreator;

/**
  * Contains the complete catalog of available modules, services, service types, and service categories.
 **/
@Schema(description="Contains the complete catalog of available modules, services, service types, and service categories.")
public class ServicesInfo   {
  
  @Schema(required = true, description = "")
  private Modules modules = null;
  
  @Schema(required = true, description = "")
  private Services services = null;
  
  @Schema(required = true, description = "")
  private ServiceTypes serviceTypes = null;
  
  @Schema(required = true, description = "")
  private ServiceCategories serviceCategories = null;
 /**
   * Get modules
   * @return modules
  **/
  @JsonProperty("modules")
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
