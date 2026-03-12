(ns inter-server-management-api.specs.website-service-info
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def website-service-info-data
  {
   (ds/opt :website_id) string?
   (ds/opt :website_server) string?
   (ds/opt :website_type) string?
   (ds/opt :website_currency) string?
   (ds/opt :website_order_date) string?
   (ds/opt :website_custid) string?
   (ds/opt :website_ip) string?
   (ds/opt :website_status) string?
   (ds/opt :website_invoice) string?
   (ds/opt :website_coupon) string?
   (ds/opt :website_extra) string?
   (ds/opt :website_hostname) string?
   (ds/opt :website_comment) string?
   (ds/opt :website_username) string?
   (ds/opt :website_server_status) string?
   })

(def website-service-info-spec
  (ds/spec
    {:name ::website-service-info
     :spec website-service-info-data}))
