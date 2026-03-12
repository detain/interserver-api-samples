(ns inter-server-management-api.specs.home-services-licenses-links
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def home-services-licenses-links-data
  {
   (ds/opt :386522) string?
   })

(def home-services-licenses-links-spec
  (ds/spec
    {:name ::home-services-licenses-links
     :spec home-services-licenses-links-data}))
