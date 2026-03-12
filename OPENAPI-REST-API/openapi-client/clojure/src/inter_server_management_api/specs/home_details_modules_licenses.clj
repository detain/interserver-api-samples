(ns inter-server-management-api.specs.home-details-modules-licenses
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def home-details-modules-licenses-data
  {
   (ds/opt :icon) string?
   (ds/opt :view_link) string?
   (ds/opt :heading) string?
   (ds/opt :buy_link) string?
   (ds/opt :list_link) string?
   })

(def home-details-modules-licenses-spec
  (ds/spec
    {:name ::home-details-modules-licenses
     :spec home-details-modules-licenses-data}))
