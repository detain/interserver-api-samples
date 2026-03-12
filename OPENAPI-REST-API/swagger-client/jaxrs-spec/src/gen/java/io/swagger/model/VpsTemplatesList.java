package io.swagger.model;

import io.swagger.model.VpsTemplateRow;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * A listing of the OS Templates available for use.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "A listing of the OS Templates available for use.")

public class VpsTemplatesList   {

  private @Valid List<VpsTemplateRow> templates = new ArrayList<VpsTemplateRow>();

  /**
   * A listing of the templates.
   **/
  public VpsTemplatesList templates(List<VpsTemplateRow> templates) {
    this.templates = templates;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "A listing of the templates.")
  @JsonProperty("templates")
  @NotNull

  public List<VpsTemplateRow> getTemplates() {
    return templates;
  }
  public void setTemplates(List<VpsTemplateRow> templates) {
    this.templates = templates;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    VpsTemplatesList vpsTemplatesList = (VpsTemplatesList) o;
    return Objects.equals(templates, vpsTemplatesList.templates);
  }

  @Override
  public int hashCode() {
    return Objects.hash(templates);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsTemplatesList {\n");
    
    sb.append("    templates: ").append(toIndentedString(templates)).append("\n");
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
