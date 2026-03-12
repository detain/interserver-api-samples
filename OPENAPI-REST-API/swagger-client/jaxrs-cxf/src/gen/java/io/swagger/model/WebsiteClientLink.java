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
  * A navigation link for webhosting-related actions in the client portal.
 **/
@Schema(description="A navigation link for webhosting-related actions in the client portal.")
public class WebsiteClientLink   {
  
  @Schema(description = "Label for the link")
 /**
   * Label for the link  
  **/
  private String label = null;
  
  @Schema(description = "Link URL")
 /**
   * Link URL  
  **/
  private String link = null;
  
  @Schema(description = "Icon for the link")
 /**
   * Icon for the link  
  **/
  private String icon = null;
  
  @Schema(description = "Icon text for the link")
 /**
   * Icon text for the link  
  **/
  private String iconText = null;
  
  @Schema(description = "Help text for the link")
 /**
   * Help text for the link  
  **/
  private String helpText = null;
  
  @Schema(description = "Other attributes for the link")
 /**
   * Other attributes for the link  
  **/
  private String otherAttr = null;
 /**
   * Label for the link
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

  public WebsiteClientLink label(String label) {
    this.label = label;
    return this;
  }

 /**
   * Link URL
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

  public WebsiteClientLink link(String link) {
    this.link = link;
    return this;
  }

 /**
   * Icon for the link
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

  public WebsiteClientLink icon(String icon) {
    this.icon = icon;
    return this;
  }

 /**
   * Icon text for the link
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

  public WebsiteClientLink iconText(String iconText) {
    this.iconText = iconText;
    return this;
  }

 /**
   * Help text for the link
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

  public WebsiteClientLink helpText(String helpText) {
    this.helpText = helpText;
    return this;
  }

 /**
   * Other attributes for the link
   * @return otherAttr
  **/
  @JsonProperty("other_attr")
  @NotNull
  public String getOtherAttr() {
    return otherAttr;
  }

  public void setOtherAttr(String otherAttr) {
    this.otherAttr = otherAttr;
  }

  public WebsiteClientLink otherAttr(String otherAttr) {
    this.otherAttr = otherAttr;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class WebsiteClientLink {\n");
    
    sb.append("    label: ").append(toIndentedString(label)).append("\n");
    sb.append("    link: ").append(toIndentedString(link)).append("\n");
    sb.append("    icon: ").append(toIndentedString(icon)).append("\n");
    sb.append("    iconText: ").append(toIndentedString(iconText)).append("\n");
    sb.append("    helpText: ").append(toIndentedString(helpText)).append("\n");
    sb.append("    otherAttr: ").append(toIndentedString(otherAttr)).append("\n");
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
