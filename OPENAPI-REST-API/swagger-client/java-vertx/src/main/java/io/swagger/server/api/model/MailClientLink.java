package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * A navigation link for mail service actions in the client portal.
 */




public class MailClientLink   {
  private String label = null;

  private String link = null;

  private String icon = null;

  private String iconText = null;

  private String helpText = null;

  private String otherAttr = null;

  public MailClientLink label(String label) {
    this.label = label;
    return this;
  }

  /**
   * The label of the client link.
   * @return label
   **/
    public String getLabel() {
    return label;
  }

  public void setLabel(String label) {
    this.label = label;
  }

  public MailClientLink link(String link) {
    this.link = link;
    return this;
  }

  /**
   * The link URL of the client link.
   * @return link
   **/
    public String getLink() {
    return link;
  }

  public void setLink(String link) {
    this.link = link;
  }

  public MailClientLink icon(String icon) {
    this.icon = icon;
    return this;
  }

  /**
   * The icon class of the client link.
   * @return icon
   **/
    public String getIcon() {
    return icon;
  }

  public void setIcon(String icon) {
    this.icon = icon;
  }

  public MailClientLink iconText(String iconText) {
    this.iconText = iconText;
    return this;
  }

  /**
   * The text for the icon of the client link.
   * @return iconText
   **/
    public String getIconText() {
    return iconText;
  }

  public void setIconText(String iconText) {
    this.iconText = iconText;
  }

  public MailClientLink helpText(String helpText) {
    this.helpText = helpText;
    return this;
  }

  /**
   * Help text for the client link.
   * @return helpText
   **/
    public String getHelpText() {
    return helpText;
  }

  public void setHelpText(String helpText) {
    this.helpText = helpText;
  }

  public MailClientLink otherAttr(String otherAttr) {
    this.otherAttr = otherAttr;
    return this;
  }

  /**
   * Additional attributes for the client link.
   * @return otherAttr
   **/
    public String getOtherAttr() {
    return otherAttr;
  }

  public void setOtherAttr(String otherAttr) {
    this.otherAttr = otherAttr;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    MailClientLink mailClientLink = (MailClientLink) o;
    return Objects.equals(this.label, mailClientLink.label) &&
        Objects.equals(this.link, mailClientLink.link) &&
        Objects.equals(this.icon, mailClientLink.icon) &&
        Objects.equals(this.iconText, mailClientLink.iconText) &&
        Objects.equals(this.helpText, mailClientLink.helpText) &&
        Objects.equals(this.otherAttr, mailClientLink.otherAttr);
  }

  @Override
  public int hashCode() {
    return Objects.hash(label, link, icon, iconText, helpText, otherAttr);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class MailClientLink {\n");
    
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
