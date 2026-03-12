package io.swagger.model;

import io.swagger.model.VpsTemplateRow;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;

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
  * A listing of the OS Templates available for use.
 **/
@Schema(description="A listing of the OS Templates available for use.")
public class VpsTemplatesList   {
  
  @Schema(required = true, description = "A listing of the templates.")
 /**
   * A listing of the templates.  
  **/
  private List<VpsTemplateRow> templates = new ArrayList<VpsTemplateRow>();
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
