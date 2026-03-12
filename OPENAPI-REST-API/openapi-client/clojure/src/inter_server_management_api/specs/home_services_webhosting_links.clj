(ns inter-server-management-api.specs.home-services-webhosting-links
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def home-services-webhosting-links-data
  {
   (ds/opt :376359) string?
   (ds/opt :376473) string?
   (ds/opt :386218) string?
   })

(def home-services-webhosting-links-spec
  (ds/spec
    {:name ::home-services-webhosting-links
     :spec home-services-webhosting-links-data}))
