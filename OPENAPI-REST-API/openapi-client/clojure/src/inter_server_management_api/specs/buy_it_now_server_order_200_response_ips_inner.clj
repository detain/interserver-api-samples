(ns inter-server-management-api.specs.buy-it-now-server-order-200-response-ips-inner
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def buy-it-now-server-order-200-response-ips-inner-data
  {
   (ds/opt :id) string?
   (ds/opt :short_desc) string?
   (ds/opt :long_desc) string?
   (ds/opt :monthly_price) string?
   })

(def buy-it-now-server-order-200-response-ips-inner-spec
  (ds/spec
    {:name ::buy-it-now-server-order-200-response-ips-inner
     :spec buy-it-now-server-order-200-response-ips-inner-data}))
