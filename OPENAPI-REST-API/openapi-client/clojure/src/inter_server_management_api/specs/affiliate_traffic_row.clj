(ns inter-server-management-api.specs.affiliate-traffic-row
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def affiliate-traffic-row-data
  {
   (ds/opt :traffic_id) string?
   (ds/opt :traffic_ip) string?
   (ds/opt :traffic_url) string?
   (ds/opt :traffic_affiliate) string?
   (ds/opt :traffic_referrer) string?
   (ds/opt :traffic_timestamp) string?
   })

(def affiliate-traffic-row-spec
  (ds/spec
    {:name ::affiliate-traffic-row
     :spec affiliate-traffic-row-data}))
