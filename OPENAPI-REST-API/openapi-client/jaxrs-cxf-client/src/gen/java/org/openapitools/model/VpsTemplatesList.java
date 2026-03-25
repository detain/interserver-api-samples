package org.openapitools.model;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.VpsTemplateRow;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * A listing of the OS Templates available for use.
 */
@ApiModel(description="A listing of the OS Templates available for use.")

public class VpsTemplatesList  {
  
 /**
  * A listing of the templates.
  */
  @ApiModelProperty(required = true, value = "A listing of the templates.")

  private List<VpsTemplateRow> templates = new ArrayList<>();
 /**
   * A listing of the templates.
   * @return templates
  **/
  @JsonProperty("templates")
  public List<VpsTemplateRow> getTemplates() {
    return templates;
  }

  public void setTemplates(List<VpsTemplateRow> templates) {
    this.templates = templates;
  }

  public VpsTemplatesList templates(List<VpsTemplateRow> templates) {
    this.templates = templates;
    return this;
  }

  public VpsTemplatesList addTemplatesItem(VpsTemplateRow templatesItem) {
    this.templates.add(templatesItem);
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
    VpsTemplatesList vpsTemplatesList = (VpsTemplatesList) o;
    return Objects.equals(this.templates, vpsTemplatesList.templates);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

