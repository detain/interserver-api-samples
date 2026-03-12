(ns inter-server-management-api.specs.mail-service-info
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def mail-service-info-data
  {
   (ds/req :mail_id) string?
   (ds/req :mail_type) string?
   (ds/req :mail_currency) string?
   (ds/req :mail_order_date) string?
   (ds/req :mail_custid) string?
   (ds/req :mail_quota) string?
   (ds/req :mail_status) string?
   (ds/req :mail_invoice) string?
   (ds/opt :mail_username) string?
   (ds/opt :mail_ip) string?
   (ds/opt :mail_coupon) string?
   (ds/opt :mail_extra) string?
   (ds/opt :mail_server_status) string?
   (ds/opt :mail_comment) string?
   })

(def mail-service-info-spec
  (ds/spec
    {:name ::mail-service-info
     :spec mail-service-info-data}))
