package io.swagger.model;

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
  * Links and labels for domain-related UI actions.
 **/
@Schema(description="Links and labels for domain-related UI actions.")
public class DomainClientLink   {
  
  @Schema(description = "")
  private String label = null;
  
  @Schema(description = "")
  private String link = null;
  
  @Schema(description = "")
  private String icon = null;
  
  @Schema(description = "")
  private String iconText = null;
  
  @Schema(description = "")
  private String helpText = null;
 /**
   * Get label
   * @return label
  **/
  @JsonProperty("label")
  @NotNull
  public String getLabel() {
    return label;
  }

  public void setLabel(String label) {
    this.label = label;
  }

  public DomainClientLink label(String label) {
    this.label = label;
    return this;
  }

 /**
   * Get link
   * @return link
  **/
  @JsonProperty("link")
  @NotNull
  public String getLink() {
    return link;
  }

  public void setLink(String link) {
    this.link = link;
  }

  public DomainClientLink link(String link) {
    this.link = link;
    return this;
  }

 /**
   * Get icon
   * @return icon
  **/
  @JsonProperty("icon")
  @NotNull
  public String getIcon() {
    return icon;
  }

  public void setIcon(String icon) {
    this.icon = icon;
  }

  public DomainClientLink icon(String icon) {
    this.icon = icon;
    return this;
  }

 /**
   * Get iconText
   * @return iconText
  **/
  @JsonProperty("icon_text")
  @NotNull
  public String getIconText() {
    return iconText;
  }

  public void setIconText(String iconText) {
    this.iconText = iconText;
  }

  public DomainClientLink iconText(String iconText) {
    this.iconText = iconText;
    return this;
  }

 /**
   * Get helpText
   * @return helpText
  **/
  @JsonProperty("help_text")
  @NotNull
  public String getHelpText() {
    return helpText;
  }

  public void setHelpText(String helpText) {
    this.helpText = helpText;
  }

  public DomainClientLink helpText(String helpText) {
    this.helpText = helpText;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DomainClientLink {\n");
    
    sb.append("    label: ").append(toIndentedString(label)).append("\n");
    sb.append("    link: ").append(toIndentedString(link)).append("\n");
    sb.append("    icon: ").append(toIndentedString(icon)).append("\n");
    sb.append("    iconText: ").append(toIndentedString(iconText)).append("\n");
    sb.append("    helpText: ").append(toIndentedString(helpText)).append("\n");
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
