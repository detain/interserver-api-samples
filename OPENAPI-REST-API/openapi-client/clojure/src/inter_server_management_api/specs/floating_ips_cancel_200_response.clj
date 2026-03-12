(ns inter-server-management-api.specs.floating-ips-cancel-200-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def floating-ips-cancel-200-response-data
  {
   (ds/req :success) boolean?
   (ds/req :text) string?
   })

(def floating-ips-cancel-200-response-spec
  (ds/spec
    {:name ::floating-ips-cancel-200-response
     :spec floating-ips-cancel-200-response-data}))
