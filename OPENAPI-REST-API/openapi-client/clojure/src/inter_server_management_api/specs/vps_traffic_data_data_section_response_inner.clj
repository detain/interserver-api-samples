(ns inter-server-management-api.specs.vps-traffic-data-data-section-response-inner
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def vps-traffic-data-data-section-response-inner-data
  {
   })

(def vps-traffic-data-data-section-response-inner-spec
  (ds/spec
    {:name ::vps-traffic-data-data-section-response-inner
     :spec vps-traffic-data-data-section-response-inner-data}))
