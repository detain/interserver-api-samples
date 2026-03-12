(ns inter-server-management-api.specs.vps-traffic-data-data-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def vps-traffic-data-data-response-data
  {
   })

(def vps-traffic-data-data-response-spec
  (ds/spec
    {:name ::vps-traffic-data-data-response
     :spec vps-traffic-data-data-response-data}))
