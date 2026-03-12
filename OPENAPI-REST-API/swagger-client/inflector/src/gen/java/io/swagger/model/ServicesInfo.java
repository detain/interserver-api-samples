package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.Modules;
import io.swagger.model.ServiceCategories;
import io.swagger.model.ServiceTypes;
import io.swagger.model.Services;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * Contains the complete catalog of available modules, services, service types, and service categories.
 **/
@Schema(description = "Contains the complete catalog of available modules, services, service types, and service categories.")


public class ServicesInfo   {
  @JsonProperty("modules")
  private Modules modules = null;
  @JsonProperty("services")
  private Services services = null;
  @JsonProperty("serviceTypes")
  private ServiceTypes serviceTypes = null;
  @JsonProperty("serviceCategories")
  private ServiceCategories serviceCategories = null;
  /**
   **/
  public ServicesInfo modules(Modules modules) {
    this.modules = modules;
    return this;
  }

  
  @Schema(required = true, description = "")
  @JsonProperty("modules")
  public Modules getModules() {
    return modules;
  }
  public void setModules(Modules modules) {
    this.modules = modules;
  }

  /**
   **/
  public ServicesInfo services(Services services) {
    this.services = services;
    return this;
  }

  
  @Schema(required = true, description = "")
  @JsonProperty("services")
  public Services getServices() {
    return services;
  }
  public void setServices(Services services) {
    this.services = services;
  }

  /**
   **/
  public ServicesInfo serviceTypes(ServiceTypes serviceTypes) {
    this.serviceTypes = serviceTypes;
    return this;
  }

  
  @Schema(required = true, description = "")
  @JsonProperty("serviceTypes")
  public ServiceTypes getServiceTypes() {
    return serviceTypes;
  }
  public void setServiceTypes(ServiceTypes serviceTypes) {
    this.serviceTypes = serviceTypes;
  }

  /**
   **/
  public ServicesInfo serviceCategories(ServiceCategories serviceCategories) {
    this.serviceCategories = serviceCategories;
    return this;
  }

  
  @Schema(required = true, description = "")
  @JsonProperty("serviceCategories")
  public ServiceCategories getServiceCategories() {
    return serviceCategories;
  }
  public void setServiceCategories(ServiceCategories serviceCategories) {
    this.serviceCategories = serviceCategories;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ServicesInfo servicesInfo = (ServicesInfo) o;
    return Objects.equals(modules, servicesInfo.modules) &&
        Objects.equals(services, servicesInfo.services) &&
        Objects.equals(serviceTypes, servicesInfo.serviceTypes) &&
        Objects.equals(serviceCategories, servicesInfo.serviceCategories);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
